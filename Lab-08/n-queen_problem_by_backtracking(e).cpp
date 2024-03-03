#include<bits/stdc++.h>
using namespace std;
int c_b[10000][10000];
vector<int>ind;
int j=0,n;
void nth_queen()
{
    int i;
    for(i=0;i<n;i++){
        bool fl=false;
        ind.push_back(i);
        for(int k=j;k>=0;k--){
            if(fl)break;
            if(c_b[k][i])fl=true;
        }
        for(int k=j,l=i;k>=0;k--,l--){
            if(fl)break;
            if(c_b[k][l])fl=true;
        }
        for(int k=j,l=i;k>=0;k--,l++){
            if(fl)break;
            if(c_b[k][l])fl=true;
        }
        if(fl){
            int s=ind.size();
            cout<<"Backtracking From Node:";
            for(int x=0;x<s;x++)cout<<ind[x]+1<<" ";
            cout<<endl;
            ind.pop_back();
            continue;
        }
        int s=ind.size();
        if(s == n){
            cout<<"Solution:";
            for(int x=0;x<s;x++)cout<<ind[x]+1<<" ";
            cout<<endl;
            ind.pop_back();
            return;
        }
        cout<<"Backtracking From Node:";
        for(int x=0;x<s;x++)cout<<ind[x]+1<<" ";
        cout<<endl;
        c_b[j][i]=1;
        j++;
        nth_queen();
        ind.pop_back();
        j--;
        c_b[j][i]=0;
    }

    return;
}



int main()
{
    int i;cin>>n;
    for(i=0;i<n;i++){
        ind.push_back(i);
        c_b[j][i]=1;
        j++;
        nth_queen();
        j--;
        c_b[j][i]=0;
        ind.pop_back();
    }

    return 0;
}
