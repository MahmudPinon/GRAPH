#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=1;j<=n;j++)
#define pb(x) push_back(x)
const int N=1e5;
int even_count[N];
int total=0;
vector<int>Graph[N];


void dfs(int node,int parent=-1)
{
    if(node%2==0){
        even_count[node]++;
        total++;
    }
    for(auto child: Graph[node])
    {
        if(child==parent) continue;
        dfs(child,node);
        even_count[node]+=even_count[child];
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
   dfs(1);
   cout<<"Toral Number of Even Number of Nodes in a Tree "<<total<<endl;
   cout<<"Even Number of Nodes in a Subtree"<<endl;
   for2(node)
   {
    cout<<node<<" Node"<<" "<<even_count[j]<<endl;
   }
}