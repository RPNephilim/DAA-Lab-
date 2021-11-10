#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int BFSorg(vector<int>adj[],bool visited[],int s,int d,int v)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(v==d)
                return 1;
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return 0;
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int>adj[],int s,int d,int v)
{
    bool visited[v+1];
    int k;
    for(int i=0;i<v;i++)
        visited[i]=false;
    k=BFSorg(adj,visited,s,d,v);
    if(k==1)
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
    BFS(adj,s-1,d-1,v);
}