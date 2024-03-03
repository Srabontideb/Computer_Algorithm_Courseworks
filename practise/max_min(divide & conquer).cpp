#include<bits/stdc++.h>
using namespace std;
void max_min(int arr[],int i,int j,int &maximum,int &minimum)
{
    if(i==j)
    {
       if(maximum<arr[i])
       {
           maximum=arr[i];
       }
       if(minimum>arr[j])
       {
           minimum=arr[j];
       }
       return;
    }
    if(arr[i]<arr[j])
            {
                    if(i=j-1)
                    {
                        if(minimum > arr[i])
                        {
                            minimum=arr[i];
                        }
                        if(maximum < arr[j])
                        {
                            maximum=arr[j];
                        }
                    }
                    else
                    {
                         if(minimum > arr[j])
                        {
                            minimum=arr[j];
                        }
                        if(maximum < arr[i])
                        {
                            maximum=arr[i];
                        }
                    }
                    return;
            }
        int mid=(i+j)/2;
        max_min(arr,i,mid,minimum,maximum);
        max_min(arr,mid+1,j,minimum,maximum);

}
int main()
{
  int p,k=0;
  ifstream file;
  file.open("input.txt");
  if(!file)
  {
      cout<<"can't open the file";
      exit(1);
  }
   while(file>>p)
    {
        cout<<p<<" ";
    }
    int arr[500];
    k=sizeof(p);
    int maximum,minimum;
    max_min(arr,0,k-1,minimum,maximum);
    cout<<maximum<<endl;
    cout<<minimum<<endl;
}
