"""
Script illustrating the following points in graph-tool

1- Graph generator
2- Graph view
3- Intervative drawing of the graph
"""

import matplotlib.pyplot as plt
from graph_tool.all import *
import numpy as np;
from gi.repository import Gtk,Gdk,GdkPixbuf,GObject;
plt.switch_backend('GTK3Cairo')

def coordinate_in_lattice(v,n,m):
    """
    compute the coordinate of the point v in the lattice of dimension (n,m
    :param v:  number of the vertex
    :param n:  rows size
    :param m: columns size
    :return:  return a tuple (x,y) for the coordinate
    """
    y=int(v/n);
    x=(v%n);

    return (x,y)


def update_state():
    global g
    global win
    global comp
    "choose a random edge"
    edges=list(g.edges())
    compo,hist=label_components(g)
    if(len(np.unique(compo.a))>=10):
        return False

    edge=edges[np.random.randint(0,g.num_edges())];
    #removing the edge
    g.remove_edge(edge)

    win.graph.regenerate_surface();
    win.graph.queue_draw();
    plt.pause(0.5)

    return True



if __name__ == '__main__':

    #generating the graph
    n,m=20,20;
    dx,dy=0.5,0.5
    print("graph generation")
    g=lattice([n,m])
    pos=g.new_vertex_property("vector<double>")
    for v in g.vertices():
        x,y=coordinate_in_lattice(int(v),n,m)
        pos[v]=np.array([dx*x,dy*y])

    compo,hist=label_components(g)
    win=GraphWindow(g,pos=pos,geometry=(500,500))
    cid=GObject.idle_add(update_state)
    win.connect("delete_event",Gtk.main_quit)
    win.show_all()
    Gtk.main()

