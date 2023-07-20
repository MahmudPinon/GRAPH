#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<n;j++)
#define pb(x) push_back(x)
#define pb1(x, y) push_back(make_pair(x, y))
const int N=1e6;
vector<pair<int,int>>graph[N];
vector<int>Graph[N];
bool Vis[N];  // In Dfs When Ever We Enter a Vertices We will Mark it as visited.
void dfs(int node)
{
       /** Take Actions on the Vertex
       After Entering Into the Vertex **/
    
    if(Vis[node]) return;
    
    cout<<node<<endl;
    Vis[node]=true;
   for(int children:Graph[node])
   {
       /** Take Actions on the Children
       before Entering Into the Vertex **/
    dfs(children);
        /** Take Actions on the Children Vertex
        After Leaving the Vertex **/
   }
       /** Take Actions on the Vertex
       After Leaving the Vertex **/
}



void solve()
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
}

int main()
{
   solve();
}