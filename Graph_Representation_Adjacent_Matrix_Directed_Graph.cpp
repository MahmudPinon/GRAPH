#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define for1(n) for(int i=0;i<n;i++)
#define for2(n) for(int j=0;j<n;j++)
#define pb(x) push_back(x);
const int N=1e3;
int adj_matrix[N][N];
int main()
{
int node,edge,vertex1,vertex2;
cin>>node>>edge;
for1(edge)
{
    cin>>vertex1>>vertex2;
    adj_matrix[vertex1][vertex2]=1;
}
for1(node)
{
 
  for2(node)
  {
    cout<<adj_matrix[i][j]<<" ";
  }
    cout<<endl;
}


}