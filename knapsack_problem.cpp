#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "N : ";
    cin >> n;

    int wt[n], prof[n];

    cout << "Weight : ";
    for (int i = 0; i < n; i++) cin >> wt[i];

    cout << "Profit : ";
    for (int i = 0; i < n; i++) cin >> prof[i];

    int mx;
    cout << "Enter maximum capacity : ";
    cin >> mx;

    int tb[n+1][mx+1];

    // Initialize base cases
    for (int i = 0; i <= n; i++) tb[i][0] = 0;
    for (int w = 0; w <= mx; w++) tb[0][w] = 0;

    // Fill DP table
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= mx; w++)
        {
            if (wt[i-1] <= w)
                tb[i][w] = max(tb[i-1][w], prof[i-1] + tb[i-1][w - wt[i-1]]);
            else
                tb[i][w] = tb[i-1][w];
        }
    }

    cout << "\nFinal result (maximum profit): " << tb[n][mx] << endl;



    for(int i = 0; i<= n; i++)
    {
        for(int j = 0; j <= mx; j++)
        cout << tb[i][j] << " ";
        cout << endl;   
    }


    return 0;
}
