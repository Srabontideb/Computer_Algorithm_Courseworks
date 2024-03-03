/*
 Enter the number of vertices:4

 Enter graph data in matrix form:
0 1 1 1
0 0 0 1
0 0 0 0
0 0 1 0
Enter the starting vertex:1
*/
#include<bits/stdc++.h>
using namespace std;
int arr[100][100],q[100],n,w=-1,i,j,p=0;
bool r[100];

void Bfs(int a)
{
     for(i=1; i<=n; i++)
     {
        if(arr[a][i] && !r[i])
            q[++w]=i;
     }
        if(p<=w)
        {
            r[q[p]]=1;
            Bfs(q[p++]);
        }
    }
int main()
{
    int t,i,j;
    cout<<" Enter the number of vertices:";
    cin>>n;
    cout<<endl;
    cout<<" Enter graph data in matrix form: "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<" Enter the starting vertex:";
    cin>>t;
    Bfs(t);
    cout<<" The node which are reachable are:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(r[i])
            cout<<i<<"\t";
        else
            cout<<" _ ";
    }
}
