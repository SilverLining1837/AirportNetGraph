#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <string>
using namespace std;
class Graph
{
    public:
        class Edge;
        class Vertex{
        public:
            Vertex(string id);
            void addEdge(Vertex *v, int dist);
            void printEdges();
            string getName();
            vector<Edge>getEdges();
        private:
            string name;
            vector<Edge> edges;
        };
        class Edge{
        public:
            Edge(Vertex *org, Vertex *dest, int dist);
            Vertex* getOrigin();
            Vertex* getDestination();
            int getDistance();
        private:
            Vertex* origin;
            Vertex* destination;
            int distance;
        };

        Graph();
        ~Graph();
        void insert(string name);
        Vertex* findVertex(string name);
        void printGraph();

    protected:
    private:

    vector<Vertex*> vertices;
};

#endif // GRAPH_H
