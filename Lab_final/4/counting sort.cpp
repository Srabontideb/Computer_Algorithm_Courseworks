#include<bits/stdc++.h>
#include<chrono>
#include<ctime>

using namespace std;
int main()
{
    int cnt,n,i;
    long long ar[7000],ar1[7000]={0},num;
    ofstream input;
    input.open("input.txt");
    for (cnt=1; cnt<=6000; cnt++)
    {
        n=rand()%3000+1;
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
            ar[n]=(num);
            n++;
        }
    }
    else
        cout<<"file can't open"<<endl;
    auto count1 = chrono::steady_clock::now();

    long long maximum=*max_element(ar,ar+n),b[maximum+5]={0};
    for(i=0; i<n; i++)
    {
        b[ar[i]]++;
    }
    for(i=1; i<=maximum; i++)
    {
        b[i]=b[i-1]+b[i];
    }

    for(i=n-1; i>=0; i--)
    {
        ar1[b[ar[i]] - 1] = ar[i];
        b[ar[i]]--;
    }
    auto count2 = chrono::steady_clock::now();
    double difference = (double)(chrono::duration_cast <chrono::nanoseconds> (count2-count1).count());
    cout<<"Time required for counting sort: "<<(double)(difference*1.0/1000000)<<" millisecond"<<endl;
   /* for(i=0; i<n; i++)
    {
        cout<<ar1[i]<<" ";
    }
    cout<<endl;*/
}

