#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6;
vector<int> Graph[N];
bool visited[N];
bool isloopexists = false;

void dfs(vector<vector<int>>& image,int r,int c,int newcolor,int initialcolor)
{
    int nr=image.size();
    int nc=image[0].size();
    if(r<0 || c<0) return;
    if(r>=nr || c>=nc) return;

    if(image[r][c]!=initialcolor) return;

    image[r][c]=newcolor;
    
    dfs(image,r-1,c,newcolor,initialcolor);
    dfs(image,r+1,c,newcolor,initialcolor);
    dfs(image,r,c-1,newcolor,initialcolor);
    dfs(image,r,c+1,newcolor,initialcolor);
}
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int initialcolor=image[sr][sc];
        if(initialcolor!=newcolor)
            dfs(image,sr, sc,newcolor,initialcolor);
        return image;    
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

    

    return 0;
}
