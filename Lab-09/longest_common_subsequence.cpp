#include<bits/stdc++.h>
using namespace std;
int Lcs(string x,string y)
{
    int m,n,i,j;
    m=x.length();
    n=y.length();
    int f_arr[m+1][n+1];
    for(i=0; i<=m; i++)
    {
        f_arr[0][i]=0;
    }
    for(i=0; i<=n; i++)
    {
        f_arr[i][0]=0;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                f_arr[i][j]=f_arr[i-1][j-1]+1;
            }
            else
                f_arr[i][j]=max(f_arr[i][j-1],f_arr[i-1][j]);
        }
    }
    return f_arr[m][n];
}
int main()
{
  string a,b;
  cin>>a>>b;
  cout<<Lcs(a,b);
}
