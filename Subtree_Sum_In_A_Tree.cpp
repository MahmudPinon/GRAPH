#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=1;j<=n;j++)
#define pb(x) push_back(x)
const int N=1e5;
vector<int>Graph[N];
int subtreesum[N];
int even_count=0;
void dfs(int node,int parent=-1)
{
    if(node%2==0) even_count++;
    for(auto child : Graph[node])
    {
        if(child==parent) continue;
        dfs(child,node);
        subtreesum[node]+=subtreesum[child];
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
   cout<<"Here"<<endl;
    for2(node)
    {
        cout<<"SubtreeSum : "<<subtreesum[j]<<endl;
    }
    cout<<even_count<<endl;
    


}