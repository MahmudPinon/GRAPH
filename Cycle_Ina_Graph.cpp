#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6;
vector<int> Graph[N];
bool visited[N];
bool isloopexists = false;

bool dfs(int node, int par)
{
    visited[node] = true;
    int parent = par;
    isloopexists = false;  
    for (auto child : Graph[node])
    {
        if(visited[child] && parent!=child) return true;
        if(visited[child]) continue;
        
        isloopexists |=dfs(child,node);
        
        
    }
    return isloopexists;
}

int main()
{
    int node, edge, vertex1, vertex2;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        cin >> vertex1 >> vertex2;
        Graph[vertex1].push_back(vertex2);
        Graph[vertex2].push_back(vertex1);
    }

    cout << dfs(1, 1) << endl;

    return 0;
}
