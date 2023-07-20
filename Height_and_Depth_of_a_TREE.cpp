#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int i=1;i<=n;i++)
#define pb(x) push_back(x)
const int N=1e6;
vector<int>Graph[N];
int Height[N],Depth[N];

void dfs(int node,int parent=0)
{
    for(auto child:Graph[node])
    {
         if(child==parent) continue;
         Depth[child]=Depth[node]+1;
         dfs(child,node);
         Height[node]=max(Height[node],Height[child]+1);
            
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
 
  dfs(1,0);
 
 for2(node)
 {   
   cout<<i<<" Heoght "<<Height[i]<<" Depth"<< Depth[i]<<endl;
 }

}