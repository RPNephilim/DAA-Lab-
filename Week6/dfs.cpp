#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int c=0;
int DFSorg(vector<int>adj[],bool visited[],int s,int d)
{
    visited[s]=true;
        for(int v:adj[s]){
            if(v==d)
            {
                c++;
                return c;
            }
            if(visited[v]==false)
            {
                DFSorg(adj,visited,v,d);
            }
        }
    return c;
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DFS(vector<int>adj[],int s,int d,int v)
{
    bool visited[v+1];
    int k;
    for(int i=0;i<v;i++)
        visited[i]=false;
    k=DFSorg(adj,visited,s,d);
    if(k>0)
    {
        cout<<"Path exists";
    }
    else
    {
        cout<<"Path does not exist";
    }
}
int main()
{
    int v;
    cout<<"Enter the Vertex : ";
    cin>>v;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);   
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,0,1);
    int i;
    int s,d;
    cout<<"Enter source and destination : ";
    cin>>s;
    cin>>d;
    DFS(adj,s-1,d-1,v);
}