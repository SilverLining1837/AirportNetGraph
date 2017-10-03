#include "Edge.h"
#include "Node.h"
Edge::Edge(Node *firstNode, Node *secNode, int inCost)
{
    orgNode = firstNode;
    dstNode = secNode;
    cost = inCost;
}

Node* Edge::getDstNode()
{
    return dstNode;
}

Node* Edge::getOrgNode()
{
    return orgNode;
}

int Edge::getCost()
{
    return cost;
}


#include "Node.h"

Node::Node(string id)
{
    name = id;
    status = NOT_VISITED;
}

//do not del the adj nodes here...they will be deleted by graph destructor
Node::~Node()
{
    adjNodeList.clear();
}

enum Status Node::getStatus()
{
    return status;
}

void Node::setStatus(enum Status st)
{
    status = st;
}

string Node::getName()
{
    return name;
}

void Node::addAdjNode(Node *adj, int cost)
{
    Edge newEdge(this, adj, cost);
    adjNodeList.push_back(newEdge);
}

Edge& Node::getAdjNodeList()
{
    return adjNodeList;
}

void Node::displayList()
{
    string edgeOp = " -> " ;
    for(int i=0 ; i < adjNodeList.size() ; i++){
        Edge edg = adjNodeList[i];
        cout << name << " -> " << edg.getDstNode()->getName() << endl ;
    }
}
