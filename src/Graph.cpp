#include <vector>
#include <iostream>
#include <string>
#include "Graph.h"
using namespace std;
Graph::Graph() {

}
Graph::~Graph() {

}
class Vertex;
class Edge;
Graph::Edge::Edge(Graph::Vertex* org,Graph::Vertex* dest, int dist){
        origin = org;
        destination = dest;
        distance = dist;
}

Graph::Vertex* Graph::Edge::getOrigin(){
    return origin;
}
Graph::Vertex* Graph::Edge::getDestination(){
    return destination;
}
int Graph::Edge::getDistance(){
    return distance;
}

Graph::Vertex::Vertex(string id){
    name = id;
}

void Graph::Vertex::addEdge(Vertex *v, int dist){
    Edge newEdge(this, v, dist);
    edges.push_back(newEdge);
}

void Graph::Vertex::printEdges(){
    if(edges.size() != 0)
        cout << name << ": ";
    for (int i = 0; i < edges.size(); i++){
        Edge e = edges[i];
        cout << e.getDestination()->getName() << " - " << e.getDistance() << endl;
    }
    cout << endl;
}

string Graph::Vertex::getName() {
    return name;
}
vector<Graph::Edge> Graph::Vertex::getEdges() {
    return edges;
}



void Graph::insert(string name){
    Vertex* v = new Vertex(name);
    vertices.push_back(v);
}

void Graph::printGraph(){
    for (int i = 0; i < vertices.size(); i++)
        vertices[i]->printEdges();
}
Graph::Vertex* Graph::findVertex(string name){
    for (int i = 0; i < vertices.size(); i++){
        if(vertices[i]->getName() == name){
            return vertices[i];
        }
    }
    return NULL;
}
