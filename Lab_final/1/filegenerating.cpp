#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    ofstream fout;
    long i=0,n=0;
    int num[10000];

    fout.open("quick1.txt");

    cout<<"Give how many number you want to generate in 'quick1.txt': ";
    cin>>n;

    for (i=0; i<n; ++i)
    {
        num [i] = rand();
        fout << num[i] <<"\t";
    }
    fout.close();

    ofstream fout1;
    long i1=0,n1=0;
    int num1[10000];

    fout1.open("quick2.txt");

    cout<<"Give how many number you want to generate in 'quick2.txt': ";
    cin>>n1;

    for (i1=0; i1<n1; ++i1)
    {
        num1 [i1] = rand();
        fout1 << num1[i1] << endl;
    }
    fout1.close();

    ofstream fout2;
    long i2=0,n2=0;
    int num2[10000];

    fout2.open("quick3.txt");

    cout<<"Give how many number you want to generate in 'quick3.txt' : ";
    cin>>n2;

    for (i2=0; i2<n2; ++i2)
    {
        num2 [i2] = rand();
        fout2 << num2[i2] << endl;
    }
    fout2.close();

    return 0;
}



