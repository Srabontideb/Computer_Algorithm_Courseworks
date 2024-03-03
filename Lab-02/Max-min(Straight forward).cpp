#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
long long val=0;
int main()
{
    int p,k=0,i;
    ifstream inFile;
    inFile.open("10000data.txt");
    if (!inFile)
    {
        cout<<"Cannot open file."<<endl;;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
    }
    cout<<endl;
    inFile.close();
    val+=2;
    int mn=ans[0],mx=ans[0];
    val++;
    for(i=1; i<ans.size(); i++)
    {
        val++;
        if(ans[i]<mn)
        {
            mn=ans[i];
            val++;
        }
        val++;
        if(ans[i]>mx)
        {
            mx=ans[i];
            val++;
        }
        val+=2;
    }
    val++;
    cout<<"minimum "<<mn<<endl;
    cout<<"maximum "<<mx<<endl;
    cout<<val<<endl;
    val=0;
    ans.clear();
    inFile.open("20000data.txt");
    if (!inFile)
    {
        cout<<"Cannot open file."<<endl;;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
    }
    cout<<endl;
    inFile.close();
    val+=2;
    mn=ans[0],mx=ans[0];
    val++;
    for(i=1; i<ans.size(); i++)
    {
        val+=2;
        if(ans[i]<mn)
        {
            mn=ans[i];
        }
        if(ans[i]>mx)
        {
            mx=ans[i];
        }
        val+=4;
    }
    val++;
    cout<<"minimum "<<mn<<endl;
    cout<<"maximum "<<mx<<endl;
    cout<<val<<endl;
    val=0;
    ans.clear();
    inFile.open("30000data.txt");
    if (!inFile)
    {
        cout<<"Cannot open file."<<endl;;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
    }
    cout<<endl;
    inFile.close();
    val+=2;
    mn=ans[0],mx=ans[0];
    val++;
    for(i=1; i<ans.size(); i++)
    {
        val+=2;
        if(ans[i]<mn)
        {
            mn=ans[i];
        }
        if(ans[i]>mx)
        {
            mx=ans[i];
        }
        val+=4;
    }
    val++;
    cout<<"minimum "<<mn<<endl;
    cout<<"maximum "<<mx<<endl;
    cout<<val<<endl;
    val=0;
    ans.clear();
    inFile.open("40000data.txt");
    if (!inFile)
    {
        cout<<"Cannot open file."<<endl;;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
    }
    cout<<endl;
    inFile.close();
    val+=2;
    mn=ans[0],mx=ans[0];
    val++;
    for(i=1; i<ans.size(); i++)
    {
        val+=2;
        if(ans[i]<mn)
        {
            mn=ans[i];
        }
        if(ans[i]>mx)
        {
            mx=ans[i];
        }
        val+=4;
    }
    val++;
    cout<<"minimum "<<mn<<endl;
    cout<<"maximum "<<mx<<endl;
    cout<<val<<endl;
    val=0;
    ans.clear();
    inFile.open("50000data.txt");
    if (!inFile)
    {
        cout<<"Cannot open file."<<endl;;
        exit(1);
    }
    while(inFile>>p)
    {
        ans.push_back(p);
    }
    cout<<endl;
    inFile.close();
    val+=2;
    mn=ans[0],mx=ans[0];
    val++;
    for(i=1; i<ans.size(); i++)
    {
        val+=2;
        if(ans[i]<mn)
        {
            mn=ans[i];
        }
        if(ans[i]>mx)
        {
            mx=ans[i];
        }
        val+=4;
    }
    val++;
    cout<<"minimum "<<mn<<endl;
    cout<<"maximum "<<mx<<endl;
    cout<<val<<endl;
    val=0;
    ans.clear();
    return 0;
}





