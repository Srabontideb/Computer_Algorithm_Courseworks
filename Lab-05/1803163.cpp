#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream file("greedy.txt");
    string s;
    getline(file,s);
    int m = stoi(s);
    int  k =1;
    cout<<"Solution no\tFractional amount\t\tTotal weight\t\tTotal profit"<<endl;
    while(m--)
    {
        cout<<"Solution "<<k<<":\t";
        vector<int>wgt,bft;
        file>>s;
        int knapsack = stoi(s);
        for(int i=0; i<5; i++)
        {
            file>>s;

            file>>s;
            wgt.push_back(stoi(s));

            file>>s;
            bft.push_back(stoi(s));
        }
        vector<pair<double,int>>item;

        for(int i = 0; i < 5; i++)
        {

            double r = (bft[i]*1.0)/(wgt[i]*1.0);

            printf("%.2f ",r);
            item.push_back(make_pair(r,wgt[i]));

        }
        cout<<"\t";
        sort(item.begin(),item.end());
        reverse(item.begin(),item.end());
        double prf = 0.0;

        for(int i = 0 ; i < 5; i++)
        {
            if(knapsack == 0)
                break;
            if(knapsack>=item[i].second)
            {

                knapsack-=item[i].second;
                cout<<item[i].second<<" ";
                prf+=(item[i].first)*(1.0*item[i].second);

            }

            if(knapsack<item[i].second)
            {
                cout<<knapsack;
                prf+=(item[i].first)*(knapsack*1.0);

                knapsack-=knapsack;
            }
        }
        cout<<"\t";
        cout<<"\t"<<prf<<endl;
        k++;
    }
    return 0;
}
