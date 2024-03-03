#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
long long val=0;
void max_min(vector<int>&v, int idx1, int idx2, int& minimum, int& maximum)
{
    val++;
    if(idx1==idx2)
    {
        val++;
        if(maximum<ans[idx1])
        {
            maximum=ans[idx1];
            val++;
        }
        val++;
        if(minimum>ans[idx2])
        {
            minimum=ans[idx2];
            val++;
        }
        return;
    }
    val++;
    if(idx2-idx1==1)
    {
        val++;
        if(ans[idx1]<ans[idx2])
        {
            val++;
            if(minimum>ans[idx1])
            {
                minimum=ans[idx1];
                val++;
            }
            val++;
            if (maximum <ans[idx2])
            {
                maximum =ans[idx2];
                val++;
            }
        }
        else
        {
            val++;
            if (minimum>ans[idx2])
            {
                minimum=ans[idx2];
                val++;
            }
            val++;
            if (maximum <ans[idx1])
            {
                maximum =ans[idx1];

            }
        }
        return;
    }
    val+=3;
    int mid=(idx1+idx2)/2;
    max_min(ans,idx1,mid,minimum, maximum);
    max_min(ans,mid + 1,idx2,minimum,maximum);
}
int main()
{
    int p,k=0,minimum,maximum;
    ifstream inFile;
    inFile.open("10000data.txt");
    if (!inFile)
    {
        cout << "Cannot open file"<<endl;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
        k++;
    }
    cout<<endl;
    inFile.close();
    maximum=INT_MIN, minimum=INT_MAX;
    max_min(ans,0,k-1, minimum,maximum);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum<<endl;
    cout<<val<<endl;
    val=0;
    k=0;
    ans.clear();
    inFile.open("20000data.txt");
    if (!inFile)
    {
        cout << "Cannot open file"<<endl;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
        k++;
    }
    cout<<endl;
    inFile.close();
    maximum=INT_MIN, minimum=INT_MAX;
    max_min(ans,0,k-1, minimum,maximum);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum<<endl;
    cout<<val<<endl;
    val=0;
    k=0;
    ans.clear();
    inFile.open("30000data.txt");
    if (!inFile)
    {
        cout << "Cannot open file"<<endl;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
        k++;
    }
    cout<<endl;
    inFile.close();
    maximum=INT_MIN, minimum=INT_MAX;
    max_min(ans,0,k-1, minimum,maximum);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum<<endl;
    cout<<val<<endl;
    val=0;
    k=0;
    ans.clear();
    inFile.open("40000data.txt");
    if (!inFile)
    {
        cout << "Cannot open file"<<endl;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
        k++;
    }
    cout<<endl;
    inFile.close();
    maximum=INT_MIN, minimum=INT_MAX;
    max_min(ans,0,k-1, minimum,maximum);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum<<endl;
    cout<<val<<endl;
    val=0;
    k=0;
    ans.clear();
    inFile.open("50000data.txt");
    if (!inFile)
    {
        cout << "Cannot open file"<<endl;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
        k++;
    }
    cout<<endl;
    inFile.close();
    maximum=INT_MIN, minimum=INT_MAX;
    max_min(ans,0,k-1, minimum,maximum);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum<<endl;
    cout<<val<<endl;
    val=0;
    k=0;
    ans.clear();
    return 0;
}

