#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,n2,n3,n,c=0;
    ifstream file;
    file.open("fibonacci.txt");
    if(file)
    {
        while(file>>n)
        {
            if(n<=1)
            {
                cout<<"the fibonacci series of "<<n<<" numbers:\n";
                cout<<0;
            }
            else
            {
                n1=0;
                n2=1;
                cout<<"the fibonacci series of "<<n<<" numbers:\n";
                cout<<n1<<" "<<n2<<" ";
                for(i=2; i<n; i++)
                {
                    n3=n1+n2;
                    n1=n2;
                    n2=n3;
                    c=c+5;
                    cout<<n3<<" ";
                }
                c++;
                cout<<"\n"<<"total number of counting steps:"<<c<<"\n";
                c=0;
                n1=0,n2=1;
            }
        }
    }
    else
        cout<<"file can't open"<<endl;
    return 0;
}
