#include <bits/stdc++.h>
using namespace std;
int find(int i,vector<int>&parent)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}

int main()
{
    int V,E;
    cin>>V>>E;
    int i,j;
    long long c[100][100]={INT_MAX};
    for(i=0;i<=V+1;i++)
    {
        for(j=0;j<=V+1;j++)
        {
            c[i][j]=INT_MAX;
        }
    }

    for(int i = 0; i<E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        c[u][v]=w;
        c[v][u]=w;

    }
    auto d1 = chrono::steady_clock::now();
    vector<int> parent(V);
    for(int i = 0; i<V; i++)
        parent[i] = i;
    int min_cost = 0;

    int edge_count = 0;
    while (edge_count < E)
    {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i <=V; i++)
        {
            for (int j = 0; j <=V; j++)
            {
                if (find(i,parent) != find(j,parent) && c[i][j] < min)
                {
                    min = c[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        int aa = find(a,parent);
        int bb = find(b,parent);
        parent[a] = b;
        edge_count++;
        min_cost += min;
    }
     auto d2 = chrono::steady_clock::now();
    double difference = double(chrono::duration_cast <chrono::nanoseconds> (d2-d1).count());
    cout<<"Total cost: "<<min_cost<<endl;
    cout<<"The time Required for kruskal(path compression): "<<difference/1000000<<" millisecond";
    return 0;
}

