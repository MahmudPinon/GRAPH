#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<n;j++)
#define pb(x) push_back(x)
#define pbs(x,y) push_back(make_pair(x,y))
const int N=1e2;
vector<pair<int,int>>adjlist[N];
bool visited[N];
void dfs(int node)
{
      if(visited[node]) return;

      cout<<node<<" ";
      visited[node]=true;
      for(auto child : adjlist[node])
      {
         int childnode=child.first;
         dfs(childnode);
      }
}


int main()
{
    int node,edge,vertex1,vertex2,weight;
    cin>>node>>edge;
    for1(edge)
    {
        cin>>vertex1>>vertex2>>weight;
        adjlist[vertex1].pbs(vertex2,weight);
        adjlist[vertex2].pbs(vertex1,weight);
    }
    dfs(1);

}