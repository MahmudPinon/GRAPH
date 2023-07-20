#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<=n;i++)
#define pb(x) push_back(x)
const int N=1e5;
vector<int>Graph[N];
int Parent[N];



void dfs(int node,int parent=-1)
{
   Parent[node]=parent;
   for(auto child : Graph[node])
   {
    if(child==parent) continue;
    dfs(child,node);
   }

}



vector<int> path(int node1)
{
    vector<int> ans;
    while (node1 != -1)
    {
         ans.pb(node1);
         node1 = Parent[node1];
        
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
    dfs(1);
    int node1,node2;
    cin>>node1>>node2;
    vector<int>node1_path=path(node1);
    vector<int>node2_path=path(node2);
    int mn_len=min(node1_path.size(),node2_path.size());
    int lca=-1;


    for1(mn_len)
    {
        
        if(node1_path[i]==node2_path[i])
        {
            lca=node1_path[i];
        }
        else
        {
            break;
        }
    }
    cout<<lca<<endl;
}