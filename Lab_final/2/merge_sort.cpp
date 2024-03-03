#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void merge(int arr[],int l,int m,int h)
{
    int b[h],i=l,j=m+1,k=l;
    while(i<=m && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        {
            b[k++]=arr[j++];
        }
    }
    if(i>m)
    {
        while(j<=h)
        {
            b[k++]=arr[j++];
        }
    }
    else
    {
        while(i<=m)
        {
            b[k++]=arr[i++];
        }
    }
    for(int p=l; p<=h; p++)
    {
        arr[p]=b[p];
    }
}
void Merge_sort(int arr[],int l,int h)
{

    int m;
    if(l<h)
    {
        m=(l+h)/2;
        Merge_sort(arr,l,m);
        Merge_sort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}
int main()
{
    int i;
    int j=0;
    ifstream file;
    file.open("merge1.txt");
    while(!file.eof())
    {
        file>>arr[j];
        j++;
    }
    file.close();
    auto count1 = chrono::steady_clock::now();
    Merge_sort(arr,0,j-1);
    auto count2 = chrono::steady_clock::now();
    double d = double(chrono::duration_cast <chrono::nanoseconds> (count2-count1).count());
    cout<<"the time required to sort the elements of 'merge1.txt': "<<(double)(d*1.0/1000000)<<" millisecond"<<endl;

    j=0;
    ifstream file1;
    file1.open("merge2.txt");
    while(!file1.eof())
    {
        file1>>arr[j];
        j++;
    }
      file1.close();
    auto count3 = chrono::steady_clock::now();
    Merge_sort(arr,0,j-1);
    auto count4 = chrono::steady_clock::now();
    double d1 = double(chrono::duration_cast <chrono::nanoseconds> (count4-count3).count());
    cout<<"the time required to sort the elements of 'merge2.txt': "<<(double)(d1*1.0/1000000)<<" millisecond"<<endl;

    j=0;
    ifstream file2;
    file2.open("merge3.txt");
    while(!file2.eof())
    {
        file2>>arr[j];
        j++;
    }
      file2.close();
    auto count5 = chrono::steady_clock::now();
    Merge_sort(arr,0,j-1);
    auto count6 = chrono::steady_clock::now();
    double d2 = double(chrono::duration_cast <chrono::nanoseconds> (count6-count5).count());
    cout<<"the time required to sort the elements of 'merge3.txt': "<<(double)(d2*1.0/1000000)<<" millisecond"<<endl;
}
