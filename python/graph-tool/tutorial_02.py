"""
Illustrating the power of filtering
"""

import numpy as np
from pylab import *
from graph_tool.all import *


if __name__ == '__main__':

    #Creating a delaunay triangulation
    g,pos=triangulation(np.random.rand(500,2)*4,type='delaunay')
    tree=min_spanning_tree(g);
    graph_draw(g,pos,edge_color=tree,output="min_tree.svg")

    #filtering the graph
    g.set_edge_filter(tree);
    graph_draw(g,pos,output="min_tree_filtered.svg")

    #computing the betweeness
    g.set_edge_filter(None)
    bv,be=betweenness(g);
    be.a/=be.a.max()/5;

    #draw
    graph_draw(g,vertex_fill_color=bv,edge_pen_width=be,output="filtered-bt.svg")


    #constructing the view
    tv=GraphView( g,efilt=tree)
    bv,be=betweenness(g);
    be.a/=be.a.max()/5;
    graph_draw(tv,pos=pos,vertex_color=bv,edge_pen_width=be,output="mst-view.svg")

    #graphview of graphview
    bv.be=betweenness(g);
    u=GraphView(g,efilt=lambda  e: be[e]> be.a.max()/2)
    graph_draw(u,pos=pos,vertex_fill_color=bv,output="central-edges-view.svg")