#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=1;j<=n;j++)
#define pb(x) push_back(x)
const int N=1e5;
vector<int>Graph[N];
bool visited[N];
vector<vector<int>>connected_component;
vector<int>current_connected_component;



bool dfs(int node,int parent=-1)
{
   
   bool flag=false;
   visited[node]=true;
   current_connected_component.push_back(node);
   cout<<node<<" ";
   for(auto child : Graph[node])
   {
       if(child!=parent && visited[child]) return true;
       if(child==parent && visited[child]) continue;
       flag|=dfs(child,node);
   }
   return flag;
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
        current_connected_component.clear();
        if(!visited[j])
        {
            cout<<dfs(j)<<endl;
            connected_component.push_back(current_connected_component);
        }
    }

    cout<<connected_component.size()<<endl;

}