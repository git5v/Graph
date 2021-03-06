#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int i , int j)
{
    adj[i].push_back(j); //making the links as undirected graph
    adj[j].push_back(i);
}

void printGraph(vector<int> adj[] , int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<"->";  //printing node 
        for(auto x: adj[i])  // printing node`s connections 
        {
            cout<<x<<",";
        }
        cout<<endl;
    }
}

int main()
{
    int v=5;
   vector<int> adj[v];
   addEdge(adj, 0, 1);
   addEdge(adj, 0, 4);
   addEdge(adj, 3, 1);
   addEdge(adj, 0, 4);
   addEdge(adj, 1, 2);
   addEdge(adj, 2, 1);
   addEdge(adj, 2, 3);
   addEdge(adj, 3, 4);
   printGraph(adj, v);
   return 0;    
}
