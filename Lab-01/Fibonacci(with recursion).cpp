#include<bits/stdc++.h>
using namespace std;
int c=0;
int fib(int n)
{
    c++;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
int main ()
{
    int j,n;
    ifstream file;
    file.open("fibonacci.txt");
    if(file)
    {
        while(file>>n)
        {
            cout<<"the fibonacci series of "<<n<<" numbers:\n";
            for(int i=0; i<n; i++)
            {
                cout<<fib(i)<<" ";
                c+=2;
            }
            c++;
            cout<<endl;
             cout<<"total number of counting steps:"<<c<<endl;
             c=0;
        }
    }
    else
        cout<<"file can't open"<<endl;
}
