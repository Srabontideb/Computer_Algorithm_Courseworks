#include<bits/stdc++.h>
using namespace std;

int arr[1000][1000],k=0,n,iteration=0;
vector <int> r;

void n_queen()
{
    int i;
    for(i=0; i<n; i++)
    {

        bool var = false;
        r.push_back(i);
        iteration++;
        for(int j=k; j>=0; j--)
        {

            if(var)
                break;
            if(arr[j][i])
                var = true;
        }
        for(int j=k,l=i; j>=0; j--,l--)
        {
            if(var)
                break;
            if(arr[j][l])
                var = true;
        }
        for(int j=k,l=i; j>=0; j--,l++)
        {
            if(var)
                break;
            if(arr[j][l])
                var = true;
        }
         arr[k][i]=1;
        if(var)
        {
            arr[k][i]=0;
            r.pop_back();
            continue;
        }

        if(r.size() == n)
        {
            cout<<"iteration: "<<iteration<<endl;
            cout<<"Solution: "<<endl;
            for(int x=0;x<n;x++)
            {
                for(int y=0;y<n;y++)
                {
                    if(arr[x][y])
                        cout<<"Q ";
                    else
                        cout<<"* ";
                }
            cout<<endl;
        }
            r.pop_back();
            arr[k][i]=0;
            return;
        }
        k++;
        n_queen();
        r.pop_back();
        k--;
        arr[k][i] = 0;
    }
    return;
}

int main()
{
    cout<<"Enter Input: ";
    cin>>n;
    int i;
    for(i=0; i<n; i++)
    {
        r.push_back(i);
        arr[k][i] = 1;
        k++;
        n_queen();
        k--;
        arr[k][i] = 0;
        r.pop_back();
    }
    return 0;
}
