//program to print bfs traversal
// we will take help of queue
#include<iostream>
#include<list>
using namespace std ;

// this class represents a directed graph
// using adjacency list representation
class Graph {

  int V; // no. of vertices
  //pointer to an array containing adjacency lists
  list <int > *adj ;
  public :
  Graph(int V);// constructor
  // function to add an edge to a graph
  void addedge(int v,int w);
  //print bfs traversal from a given source s
  void BFS (int s);



};

Graph::Graph (int V){
  this->V=V;
  adj =new list<int > [V];

}

void Graph::addedge(int v,int w){
  adj[v].push_back(w);// add w to v's list
}
void Graph::BFS(int s){
  // mark all the visited vertices as not visited
  bool *visited = new bool [V];
  for (int i=0;i<V;i++){
    visited[i]=false;
  }
  // create a queue for BFS
  list<int>queue;
  // mark the current node as visited and unqueue it
  visited[s]=true;
  queue.push_back(s);


  // 'i' will be used to get all adjacent
  // vertices of a vertex
  list<int >:: iterator i;
  while(!queue.empty()){
    //dequeue a vertex from queue and print it
    s=queue.front ();
    cout<<s<<" ";
    queue.pop_front();
    // Get all adjacent vertices of the dequeued
       // vertex s. If a adjacent has not been visited,
      // then mark it visited and enqueue it
for (i=adj[s].begin();i!=adj[s].end();++i){
  if (!visited[*i]){
    visited[*i]=true;
    queue.push_back(*i);
  }
}
}

}

// program to implement the bfs
int main(){
  //create a graph , which u want to make
  Graph g(4);
  g.addEdge(0, 1);
   g.addEdge(0, 2);
   g.addEdge(1, 2);
   g.addEdge(2, 0);
   g.addEdge(2, 3);
   g.addEdge(3, 3);
   cout << "Following is Breadth First Traversal "
       << "(starting from vertex 2) \n";
  g.BFS(2);
  return 0;
}
