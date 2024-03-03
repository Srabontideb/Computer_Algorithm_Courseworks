#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    ofstream fout;
    long i=0,n=0;
    int num[100000];

    fout.open("input.txt");

    cout << "Give how many number you want to generate: ";
    cin  >> n;

    for (i=0; i<n; ++i)
    {
        num [i] = rand();
        fout << num[i] << endl;
    }

   fout.close();
   return 0;
}


