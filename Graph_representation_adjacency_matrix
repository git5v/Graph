#include<bits/stdc++.h>
using namespace std;
 
int add_edge(vector<vector<int> >&adj_matrix, int i, int j)
{
    adj_matrix[i][j]=1; 
    adj_matrix[j][i]=1;
}
 
int print(int n, vector<vector<int>> adj_matrix)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 
int main() 
{
    int n = 6;
 
    vector<vector<int> > adj_matrix(n,vector<int>(n)); 
 
    add_edge(adj_matrix,0,2);
    add_edge(adj_matrix,0,5);
    add_edge(adj_matrix,1,2);
    add_edge(adj_matrix,1,3);
    add_edge(adj_matrix,1,4);
    add_edge(adj_matrix,2,3);
    add_edge(adj_matrix,3,4);
    add_edge(adj_matrix,4,4);
    add_edge(adj_matrix,5,2);
 
    print(n, adj_matrix);
 
    return 0;
}
