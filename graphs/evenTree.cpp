#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Note: I'm 100% sure this code will only work for an ACYCLICAL graph
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
		Node* parent;
//I guess to be proper this thing should have accessors and shit. MEH.

};

Node::Node(int name)
{
	this->name = name;
	parent = NULL;
}

int Node::countChildren()
{
	int count = 0;
	if(!this->children.empty())
	{
		vector<Node*>::iterator iter;
		for(iter = this->children.begin(); iter < this->children.end(); iter++)
		{
			if((*iter)->parent != NULL) //Gloriously hacktastic
			//This lovely hack will make sure that I only process children who
			//want to continue to be children, not ones that have freed themselves
			//by setting their parent to null
			{
				count += 1; // for the current child
				count += (*iter)->countChildren(); // for the grandchildren
			}
		}
	}
	return count;
}

int main() {
	int numNodes = 0, numEdges = 0;
    cin >> numNodes >> numEdges;
    vector<Node*> nodes;
//     vector<pair<int, int>> edges;
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
    		child->parent = nodes.at(v-1);
    		node->children.push_back(child);
    	}
    	else
    	{    	
    		Node* node = nodes.at(u-1);
    		Node* child = nodes.at(v-1);
    		child->parent = nodes.at(u-1);
    		node->children.push_back(child);
    	}
    }
    
    int countTree = 0;
    //Turns out you can reverse iterate through the tree from the leaf nodes back up
    //and if you find an even tree, sever it and increment the counter (1 new tree, one
    //removed edge). Viola, problem sloved.
    
    vector<Node*> newRoots;
    vector<Node*>::reverse_iterator rIter;
    for(rIter = nodes.rbegin(); rIter < nodes.rend(); rIter++)
    {
    	Node* node = *rIter;
    	if(node->countChildren()%2 > 0)
    	{
    		if(node->parent != NULL)
    		{
    		    countTree++;
//     			Node* parent = node->parent;
//     			node->parent = NULL;
    		}
    	}
    }
    
    cout << countTree;
    
    return 0;
}
