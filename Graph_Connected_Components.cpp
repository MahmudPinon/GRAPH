#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=1;j<=n;j++)
#define pb(x) push_back(x)
const int N=1e6;
vector<int>Graph[N];
bool visited[N];
vector<int>current_connected_component;
vector<vector<int>>connected_component;


void dfs(int node)
{
    
    current_connected_component.pb(node);
    visited[node]=true;

    for(auto child: Graph[node])
    {
        if(visited[child]) continue;
        dfs(child);
    }

}


int main()
{
    int node,edge,vertex1,vertex2;
    cin>>node>>edge;
    for1(edge)
    {
        cin>>vertex1>>vertex2;
        Graph[vertex1].pb(vertex2);
        Graph[vertex2].pb(vertex1);
    }

    for2(node)
    {
        if(visited[j]) continue;
        
        current_connected_component.clear();
        dfs(j);
        connected_component.push_back(current_connected_component);    
    }
    
    cout<<connected_component.size()<<endl;
}