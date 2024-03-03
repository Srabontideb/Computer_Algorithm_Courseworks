#include<bits/stdc++.h>
#include<chrono>
#include<ctime>

using namespace std;
int main()
{
    int cnt,n,i;
    long long ar[100000],ar1[100000],num;
    ofstream input;
    input.open("input.txt");
    for (cnt=1; cnt<=100000; cnt++)
    {
        n=rand()%10000+1;
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
   // auto count1 = chrono::steady_clock::now();
   clock_t start_time, end_time;
    start_time = clock();

    long long maximum=*max_element(ar,ar+n),b[maximum+5];
    memset(b,0,sizeof(b));
    memset(ar1,0,sizeof(ar1));
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
    //auto count2 = chrono::steady_clock::now();
    end_time = clock();
    for(i=0; i<n; i++)
    {
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
    //double difference = (double)(chrono::duration_cast <chrono::nanoseconds> (count2-count1).count());
      //cout<<"Time required for bubble sort: "<<(double)(difference)<<endl;
        double time=((double) end_time - start_time)/CLOCKS_PER_SEC;
        cout<<endl<<"Execution Time : "<<time<<endl;
}

