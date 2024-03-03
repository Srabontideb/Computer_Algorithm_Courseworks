#include<bits/stdc++.h>
using namespace std;

struct node{
    int weight;
    int profit;
    double rat;
};

int main()
{
    int n,w;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the Knapsack capacity: ";
    cin>>w;
    node item[n];
    cout<<"Enter the weight and profit of the items:"<<endl;
    cout<<"Item "<<"Weight "<<"Profit"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i<<"  ";
        cin>>item[i].weight>>item[i].profit;
        item[i].rat = (double)item[i].profit/item[i].weight;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            //cout<<item[i].rat<<" ";
            if((double)item[i].profit/item[i].weight < (double)item[j].profit/item[j].weight)
            {
                node temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<item[i].rat<<" ";
    }
    double max_p = 0.0;
    int i=0;
    while(i<n && w!=0)
    {
        if(item[i].weight <= w)
        {
            //cout<<item[i].rat<<" ";
            max_p += item[i].profit;
            w -= item[i].weight;
        }
        else
        {
            //cout<<item[i].rat<<" ";
            max_p += (item[i].profit*((double)w/item[i].weight));
            break;
        }
        i++;
    }

    cout<<"Maximum profit: "<<max_p;
    return 0;

}
