#include<bits/stdc++.h>
using namespace std;

bool graph[100][100];
int v,m;
int col_sol[20];

void print_Sol()
{
    cout<<"Color Solution: ";
    for(int i=0;i<v;i++)
    {
        cout<<col_sol[i]<<" ";
    }
}

bool isValid(int node,int col)
{
    for(int an=0;an<v;an++)
    {
        if(graph[node][an] && col_sol[an] == col)
                return false;

        //else
            //return false;
    }
    return true;
}

bool gc(int node)
{
    if(node == v)
        return true;

    for(int col=1;col<=m;col++)
    {
       if(isValid(node,col))
       {
           col_sol[node] = col;

           //cout<<col<<endl;

           if(gc(node+1)==true)
            return true;
            col_sol[node] = 0;//backtracking
           //cout<<col<<endl;

       }
       //else
       //return false;

    }
    return false;
}

int main()
{
   cout<<"Enter the number of vertices: ";
   cin>>v;
   cout<<"Enter the number of colors: ";
   cin>>m;
   cout<<"Enter the of graph: "<<endl;
   for(int i=0;i<v;i++)
   {
       for(int j=0;j<v;j++)
       {
           cout<<"Node ["<<i<<"]["<<j<<"]: ";
           cin>>graph[i][j];
       }
   }

   for(int i=0;i<v;i++)
   {
       col_sol[i] = 0;
   }

   if(gc(0))
    print_Sol();
   else
    cout<<"Solution does not exists!!!"<<endl;

   return 0;

}
