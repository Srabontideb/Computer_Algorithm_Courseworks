#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt,n,i,j,temp;
    long long ar[40000],num;
    ofstream input;
    input.open("input.txt");
    for (cnt=1;cnt<=30000;cnt++)
    {
        n=rand()%30000+1;
        input<<n<<endl;
    }
    input.close();
    n=0;
    ifstream file;
    file.open("input.txt");
    if(file)
    {
        while(file>>num)
        {
            ar[n++]=(num);
        }
    }
    else
        cout<<"file can't open"<<endl;
    auto count1 = chrono::steady_clock::now();
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
     auto count2 = chrono::steady_clock::now();
         /*  for(i=0; i<n; i++)
        {
             cout<<ar[i]<<" ";
        }*/
     cout<<endl;
     double difference = double(chrono::duration_cast <chrono::nanoseconds> (count2-count1).count());
     cout<<"Time required for bubble sort: "<<double(difference*1.0/1000000)<<" millisecond"<<endl;
}
