#include <bits/stdc++.h>
using namespace std;
const int mx = 100000;
pair <long long, pair<int, int> > store[mx];
int indx[mx], vertex, path;

void init()
{
    for(int i = 0;i < mx;++i)
        indx[i] = i;
}

int pick_root(int t)
{
    while(indx[t] != t)
    {
        indx[t] = indx[indx[t]];
        t = indx[t];
    }
    return t;
}

void union_func(int a, int b)
{
    int store = pick_root(a);
    int q = pick_root(b);
    indx[store] = indx[q];
}

long long kruskal(pair<long long, pair<int, int> > store[])
{
    int a, b;
    long long cost, min_cost = 0;
    for(int i = 0;i < path;++i)
    {
        a = store[i].second.first;
        b = store[i].second.second;
        cost = store[i].first;
        if(pick_root(a) != pick_root(b))
        {
            min_cost += cost;
            union_func(a, b);
        }
    }
    return min_cost;
}

int main()
{
    int v, e;
    long long w, cost, min_cost;
    init();
    cin >> vertex >> path;
    for(int i = 0;i < path;++i)
    {
        cin >> v >> e >> w;
        store[i] = make_pair(w, make_pair(v, e));
    }
    sort(store, store + path);

    auto d1 = chrono::steady_clock::now();
    min_cost = kruskal(store);
    auto d2 = chrono::steady_clock::now();

    double difference = double(chrono::duration_cast <chrono::nanoseconds> (d2-d1).count());

    cout <<"Total Cost: "<< min_cost << endl;
    cout<<"The time Required for kruskal(path compression): "<<difference/1000000<<" millisecond";
    return 0;
}
