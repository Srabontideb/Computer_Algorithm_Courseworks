#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int left,int right)
{
    int i=left-1;
    int j;
    int pi=arr[right];
    for(j=left;j<=right-1;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[right]);
    return (i+1);
}
void QuickSort(int arr[],int left,int right)
{
    if(left<right)
    {
      int pi= partition(arr,left,right);
      QuickSort(arr,left,pi-1);
      QuickSort(arr,pi+1,right);
    }
}
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,i=0,a[100000];
    ifstream file;
    file.open("quick1.txt");
    if(file)
    {
        while(file>>n)
            {
                 a[i++]=n;
            }
    }
    else
        cout<<"file can't open"<<endl;
        file.close();
        auto count1 = chrono::steady_clock::now();
        QuickSort(a,0,i);
        auto count2 = chrono::steady_clock::now();
        double d = double(chrono::duration_cast <chrono::nanoseconds> (count2-count1).count());
     cout<<"the time required to sort the elements of 'quick1.txt': "<<(double)(d*1.0/1000000)<<" millisecond"<<endl;

    ifstream file1;
    file1.open("quick2.txt");
    if(file1)
    {
        while(file1>>n)
            {
                 a[i++]=n;
            }
    }
    else
        cout<<"file can't open"<<endl;
        file1.close();
        auto count3 = chrono::steady_clock::now();
        QuickSort(a,0,i);
        auto count4 = chrono::steady_clock::now();
        double d1 = double(chrono::duration_cast <chrono::nanoseconds> (count4-count3).count());
     cout<<"the time required to sort the elements of 'quick2.txt': "<<(double)(d1*1.0/1000000)<<" millisecond"<<endl;


    ifstream file2;
    file2.open("quick3.txt");
    if(file2)
    {
        while(file2>>n)
            {
                 a[i++]=n;
            }
    }
    else
        cout<<"file can't open"<<endl;
        file2.close();
        auto count5 = chrono::steady_clock::now();
        QuickSort(a,0,i);
        auto count6 = chrono::steady_clock::now();
        double d2 = double(chrono::duration_cast <chrono::nanoseconds> (count6-count5).count());
     cout<<"the time required to sort the elements of 'quick3.txt': "<<(double)(d2*1.0/1000000)<<" millisecond"<<endl;
}
