#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<n;j++)
#define pb(x) push_back(x);
#define pb1(x, y) push_back(make_pair(x, y))
const int N=1e6;
vector<pair<int,int>>graph[N];
int main()
{
int node,edge,vertex1,vertex2,weight;
cin>>node>>edge;
for1(edge)
{
    cin>>vertex1>>vertex2>>weight;
    graph[vertex1].pb1(vertex2,weight);

}
for1(node)
{
    if(!graph[i].empty())
    {
     cout<<"Node "<<i <<" Undirected Connected Nodes and Weights: ";
    for2(graph[i].size())
    {
        cout<<"("<<graph[i][j].first<<","<<graph[i][j].second<<") ";
    }
    cout<<endl;  
    }
}


}