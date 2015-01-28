#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Note: I'm already 99.9% sure this code will only work for an ACYCLICAL graph
//Otherwise it'll get stuck. Honest. Don't try it.


//AH I remember why we use pointers now. Damn implied copy contructors for everything.
//Change the one I pointed you to, dang it!

class Node
{
	public:
		Node(int name);
		int name;
		vector<Node*> children;
		int countChildren();
//I guess to be proper this thing should have accessors and shit. MEH.

};

Node::Node(int name)
{
	this->name = name;
}

int Node::countChildren()
{
	int count = 0;
	if(!this->children.empty())
	{
		vector<Node*>::iterator iter;
		for(iter = this->children.begin(); iter < this->children.end(); iter++)
		{
			count += 1; // for the current child
			count += (*iter)->countChildren(); // for the grandchildren
		}
	}
	return count;
}

int main() {
	int numNodes = 0, numEdges = 0;
    cin >> numNodes >> numEdges;
    vector<Node*> nodes;
    for(int i = 0; i < numNodes; i++)
    {
    	Node* newNode = new Node(i+1);
    	nodes.push_back(newNode);
    }
    for(int j = 0; j < numEdges; j++)
    {
    	int u = 0, v = 0;
    	cin >> u >> v;
    	if(u > v) //u cannot equal v
    	{
    		Node* node = nodes.at(v-1);
    		Node* child = nodes.at(u-1);
    		node->children.push_back(child);
    	}
    	else
    	{    	
    		Node* node = nodes.at(u-1);
    		Node* child = nodes.at(v-1);
    		node->children.push_back(child);
    	}
    }
    
    int countExtra = 0; //this actually counts the number of trees in the resulting forest...
    vector<Node*>::reverse_iterator rIter;
    for(rIter = nodes.rbegin(); rIter < nodes.rend(); rIter++)
    {
    	Node* node = *rIter;
    	if(node->countChildren()%2 > 0)
    		countExtra++;
    }
    
    cout << countExtra;
    
    return 0;
}
