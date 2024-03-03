/*
Total item: 5
knapsack capacity: 11

profit  weight
1 1
6 2
18 5
22 6
28 7
*/
#include <bits/stdc++.h>
using namespace std;
class obj
    {
    public :
            int p;
            int w;
            bool f;
    };
class Knapsack
    {
        int arr[100][100];
        int obj_no,c,i,j;

            public :
                Knapsack()
                {
                    for(i = 0; i < 100; i++)
                    {
                        for(j = 0; j < 100; j++)
                        {
                            arr[i][j] = 0;
                        }
                    }
                }

        void prnt()
        {
            cout << "\nMaximum profit: " << arr[obj_no][c] << endl;
        }

    void sort(obj obj_arr[ ], int size)
        {
            for(int i = 1; i < size; i++)
            {

                for(int j = i + 1; j <= size; j++)
                {
                    if(obj_arr[j].w < obj_arr[i].w)
                    {
                        obj tmp = obj_arr[j];
                        obj_arr[j] = obj_arr[i];
                        obj_arr[i] = tmp;
                    }
                }
            }
        }

    void Dkp(obj obj_arr[ ], int obj_no, int c)
    {
        this -> obj_no = obj_no;
        this -> c = c;

        for(int i = 1; i <= obj_no; i++)
        {
            for(int j = 0; j <= c; j++)
            {
                if(j - obj_arr[i].w < 0)
                    arr[i][j] = arr[i - 1][j];
                else
                    arr[i][j] = max(arr[i - 1][j], arr[i-1][j - obj_arr[i].w] + obj_arr[i].p);
            }
        }
    }
};

int main()
{
    int n, k;
    obj arr[101];
    Knapsack ob;
    cout << "Total item: ";
    cin >> n;
    cout << "knapsack capacity: ";
    cin >> k;
    cout << endl;
    cout << "profit  weight " << endl;
    arr[0].p = 0;
    arr[0].w = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i].p >> arr[i].w;
        arr[i].f = false;
    }

    ob.sort(arr, n);
    ob.Dkp(arr, n, k);
    ob.prnt();

    return 0;
}



