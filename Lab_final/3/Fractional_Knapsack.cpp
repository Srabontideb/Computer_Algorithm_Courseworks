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

 struct obj {
    int w;
    int p;
    float d;
};
void Knapsack(obj arr[ ], int size, int c) {
    int t = c,i;

    for(i = 0; i < size; i++) {
        if(arr[i].w > t)
		{
			arr[i].d = (float)t / arr[i].w;
            break;
        }
        arr[i].d = 1;
        t = t - arr[i].w;
    }
}

int main()
{
    obj arr[100];
    int n, m,i;
    float maxp = 0.0;

    cout << "Total item: ";
    cin >> n;
    cout << "knapsack capacity: ";
    cin >> m;
    cout << endl;

    cout << "profit  weight " << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i].p;
        cin >> arr[i].w;
        arr[i].d = 0;
    }

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++) {
            if((float)arr[j].p / arr[j].w > (float)arr[i].p / arr[i].w) {
                obj temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    Knapsack(arr, n, m);
    for(int i = 0; i < n; i++) {
        if(arr[i].d != 0.0) {
            maxp += arr[i].p * arr[i].d;
        }
    }
    cout << endl;
    cout << "Maximum profit: " << maxp << endl;

    return 0;
}







