#ifndef EDGE_H
#define EDGE_H
#include "Node.h"

class Edge
{
    public:
         #ifndef NODE_H
#define NODE_H

#include <string>
class Node
{
     private:
        string name;
        Edge adjNodeList;//list of outgoing edges for this vertex
        enum Status status;//used in dfs to mark the node visited
    public:
        Node(string id);
        virtual ~Node();
        enum Status getStatus();
        void setStatus(enum Status st);
        string getName();
        void addAdjNode(Node *adj, int cost);
        Edge& getAdjNodeList();
        void displayList();
    protected:

};

#endif // NODE_H



        Edge(Node *firstNode, Node *secNode, int inCost);
        virtual ~Edge();
        Node* getDstNode();
        Node* getOrgNode();
        int getCost();





    protected:
    private:
        Node *orgNode;//the originating vertex
        Node *dstNode;//the destination vertex
        int cost;//cost of the edge


} ;

#endif // EDGE_H
