#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=1;j<=n;j++)
#define pb(x) push_back(x)
const int N=1e5;
vector<int>Graph[N];
int Depth[N];



void dfs(int node,int parent=-1)
{
    for(auto child:Graph[node])
    {
        if(child==parent) continue;
        Depth[child]=Depth[node]+1;
        dfs(child,node);

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
   int max_depth=-1;
   int max_depth_node=-1;
   for2(node)
   {
      if(Depth[j]>max_depth)
      {
        max_depth=Depth[j];
        max_depth_node=j;
      }
      Depth[j]=0;
   }

   cout<<"Max Depth Node For first Diameter "<<max_depth_node<<endl;
   max_depth=-1;
   dfs(max_depth_node);
   for2(node)
   {
      if(Depth[j]>max_depth)
      {
        max_depth=Depth[j];
        max_depth_node=j;
      }
   }
   cout<<"Max Depth Node for 2nd Diamater "<<max_depth_node<<endl;
   cout<<"Maximum Depth "<<Depth[max_depth_node]<<endl;


   cout<<"Diameter of the Tree "<<Depth[max_depth_node]<<endl;
}

