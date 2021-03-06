#include <iostream>
#include <lemon/list_graph.h>
#include<lemon/graph_to_eps.h>
#include<lemon/math.h>

using namespace lemon;
using namespace std;

int main()
{
  ListDigraph g;
  ListDigraph::Node Lahore = g.addNode();
  ListDigraph::Node Islamabad = g.addNode();
  ListDigraph::Node Faisalabad = g.addNode();
  ListDigraph::Arc  MotorWay = g.addArc(Lahore, Islamabad);
  ListDigraph::Arc  GTRoad = g.addArc(Islamabad, Lahore);
  typedef dim2::Point<int> Point;
  ListDigraph::NodeMap<Point> coords(g);
  ListDigraph::NodeMap<double> sizes(g);
  ListDigraph::NodeMap<int> colors(g);
  ListDigraph::NodeMap<int> shapes(g);
  ListDigraph::ArcMap<int> acolors(g);
  ListDigraph::ArcMap<int> widths(g);
  
  coords[Lahore]=Point(10,80);  sizes[Lahore]=1; colors[Lahore]=1; shapes[Lahore]=0;
  coords[Islamabad]=Point(70,10);  sizes[Islamabad]=2; colors[Islamabad]=2; shapes[Islamabad]=2;
  acolors[MotorWay]=3; widths[MotorWay]=4;
  
  cout << "Hello World! This is LEMON library here." << endl;
  cout << "We have a directed graph with " << countNodes(g) << " nodes "
       << "and " << countArcs(g) << " arc." << endl;
       
  cout << "Create 'graph_to_eps_demo_out_1_pure.eps'" << endl;
  graphToEps(g,"graph_to_eps_demo_out_1_pure.eps").
    coords(coords).
    title("Sample .eps figure").
    copyright("(C) 2003-2009 LEMON Project").
    run();
  return 0;
  }
