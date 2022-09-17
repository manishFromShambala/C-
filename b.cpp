#include <iostream>
#include <limits.h>
#include <list>
#include <stack>
#include <bits/stdc++.h>
#define NINF INT_MIN
using namespace std;
#define n 100000
 
// To keep correct and reverse direction
vector<int> a[n], b[n];
 
bool p[n], q[n];
 

// Graph is represented using adjacency list. Every
// node of adjacency list contains vertex number of
// the vertex to which edge connects. It also
// contains weight of the edge
class AdjListNode {
	int v;
	int weight;

public:
	AdjListNode(int _v, int _w)
	{
		v = _v;
		weight = _w;
	}
	int getV() { return v; }
	int getWeight() { return weight; }
};

// Class to represent a graph using adjacency list
// representation
class Graph {
	int V; // No. of vertices'

	// Pointer to an array containing adjacency lists
	list<AdjListNode>* adj;

	// A function used by longestPath
	void topologicalSortUtil(int v, bool visited[],
							stack<int>& Stack);

public:
	Graph(int V); // Constructor
	~Graph(); // Destructor

	// function to add an edge to graph
	void addEdge(int u, int v, int weight);

	// Finds longest distances from given source vertex
	void longestPath(int s);
};

Graph::Graph(int V) // Constructor
{
	this->V = V;
	adj = new list<AdjListNode>[V];
}

Graph::~Graph() // Destructor
{
	delete [] adj;
}


void Graph::addEdge(int u, int v, int weight)
{
	AdjListNode node(v, weight);
	adj[u].push_back(node); // Add v to u's list
}

// A recursive function used by longestPath. See below
// link for details
// https:// www.geeksforgeeks.org/topological-sorting/
void Graph::topologicalSortUtil(int v, bool visited[],
								stack<int>& Stack)
{
	// Mark the current node as visited
	visited[v] = true;

	// Recur for all the vertices adjacent to this vertex
	list<AdjListNode>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i) {
		AdjListNode node = *i;
		if (!visited[node.getV()])
			topologicalSortUtil(node.getV(), visited, Stack);
	}

	// Push current vertex to stack which stores topological
	// sort
	Stack.push(v);
}

// The function to find longest distances from a given vertex.
// It uses recursive topologicalSortUtil() to get topological
// sorting.
void Graph::longestPath(int s)
{
	stack<int> Stack;
	int dist[V];

	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function to store Topological
	// Sort starting from all vertices one by one
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			topologicalSortUtil(i, visited, Stack);

	// Initialize distances to all vertices as infinite and
	// distance to source as 0
	for (int i = 0; i < V; i++)
		dist[i] = NINF;
	dist[s] = 0;
	// Process vertices in topological order
	while (Stack.empty() == false) {
		// Get the next vertex from topological order
		int u = Stack.top();
		Stack.pop();

		// Update distances of all adjacent vertices
		list<AdjListNode>::iterator i;
		if (dist[u] != NINF) {
			for (i = adj[u].begin(); i != adj[u].end(); ++i){
			
				if (dist[i->getV()] < dist[u] + i->getWeight())
					dist[i->getV()] = dist[u] + i->getWeight();
			}
		}
	}

	// Print the calculated longest distances
	for (int i = 0; i < V; i++)
		(dist[i] == NINF) ? cout << "INF " : cout << dist[i] << " ";
	
	delete [] visited;
}


void AddEdge(int s, int t)
{
    a[s].push_back(t);    //add edge
    b[t].push_back(s);    // another edge
}
 

void dfs1(int x)
{
    p[x] = true;
 
    for (auto i : a[x])
        if (!p[i])
            dfs1(i);
}
 
// DFS function
void dfs2(int x)
{
    q[x] = true;
 
    for (auto i : b[x])
        if (!q[i])
            dfs2(i);
}
 
bool Is_Connected(int number)
{
    // Call for correct direction
    memset(p, false, sizeof p);
    dfs1(1);
 
    // Call for reverse direction
    memset(q, false, sizeof q);
    dfs2(1);
 
    for (int i = 1; i <= number; i++) {
 
        // If any vertex it not visited in any direction
        // Then graph is not connected
        if (!p[i] and !q[i])
            return false;
    }
 
    // If graph is connected
    return true;
}
 
// Driver program to test above functions
int main()
{
	// Create a graph given in the above diagram.
	// Here vertex numbers are 0, 1, 2, 3, 4, 5 with
	// following mappings:
	// 0=r, 1=s, 2=t, 3=x, 4=y, 5=z
	int number = 4;
 
    // Adding edges
    AddEdge(1, 2);
    AddEdge(1, 3);
    AddEdge(2, 3);
    AddEdge(3, 4);
     Graph g(6);
    // Function call
    if (Is_Connected(number)) {
    	g.addEdge(1, 2, 1);
    	g.addEdge(1, 3, 1);
    	g.addEdge(2, 3, 1);
    	g.addEdge(3, 4, 1);
    
    	int s = 1;
    	cout << "Following are longest distances from "
    			"source vertex "
    		<< s << " \n";
    	g.longestPath(s);}
    else
        cout << "No";
 

	return 0;
}
