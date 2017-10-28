"""
First tutorial using graph-tool
"""

import numpy as np
np.random.seed(42)
from graph_tool.all import  *
import pylab as plt;


if __name__ == '__main__':


    #setting the seed
    g=Graph();

    #max size of the graph
    N=30000;

    #creating the vertex properties
    v_age=g.new_vertex_property("int");
    e_age=g.new_edge_property("int");

    #Creating the first node
    v=g.add_vertex();
    v_age[v]=0;

    #List to simulate the probability of neighbors
    vlist=[v];

    #main loop to add a vertex
    for i in range(1,N):
        print("adding node i= %.2f\n"%(float(i)/N))
        v=g.add_vertex();               #addin a simple node
        v_age[v]=i;

        #choose the node to connect
        idx=np.random.randint(0,len(vlist));
        target=vlist[idx]
        edge=g.add_edge(v,target);
        e_age[edge]=i;

        #changing vlist
        vlist.append(v);
        vlist.append(target)


    #making the properties internal
    print("properties")
    g.vertex_properties["age"]=v_age;
    g.edge_properties["age"]=e_age;

    #save the graph
    #g.save("price.xml.gz")

    #drawing the graph
    print("computing the layout")
    age=g.vertex_properties["age"];
    pos=sfdp_layout(g);           #layout
    print("plotting")
    graph_draw(g,pos,output_size=(1000,1000),vertex_color=[1,1,1,0],
               vertex_fill_color=age,vertex_size=1,edge_pen_width=1.2,
               vcmap=plt.matplotlib.cm.gist_heat_r,output="price.pdf")
    print("finished plotting")




