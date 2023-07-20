#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<n;j++)
#define pb(x) push_back(x);
const int N=1e6;
vector<int>graph[N];
int main()
{
int node,edge,vertex1,vertex2;
cin>>node>>edge;
for1(edge)
{
    cin>>vertex1>>vertex2;
    graph[vertex1].pb(vertex2);
    graph[vertex2].pb(vertex1);

}
for1(node)
{
    cout<<"Node "<<i <<" Undirected Connected Nodes: ";
    for2(graph[i].size())
    {
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
}


}