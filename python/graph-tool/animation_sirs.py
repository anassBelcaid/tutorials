"""
perform simle graph-tool animation
"""

from graph_tool.all import *
from numpy.random import *
import sys, os ,os.path

from gi.repository import Gtk, Gdk, GdkPixbuf,GObject

seed(42);
seed_rng(42);

if __name__ == '__main__':
    g=collection.data["netscience"];
    g = GraphView(g, vfilt=label_largest_component(g), directed=False)
    g=Graph(g,prune=True)

    pos=g.vp["pos"]         #layout positions

    ecolor = g.new_edge_property("vector<double>")
    for e in g.edges():
        ecolor[e] = [0.6, 0.6, 0.6, 1]
    vcolor = g.new_vertex_property("vector<double>")
    for v in g.vertices():
        vcolor[v] = [0.6, 0.6, 0.6, 1]

    win = GraphWindow(g, pos, geometry=(500, 400),
                      edge_color=ecolor,
                      vertex_fill_color=vcolor)
    win.show_all()
    Gtk.main()