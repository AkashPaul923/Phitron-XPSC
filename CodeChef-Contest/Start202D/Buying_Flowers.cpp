#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, coin = INT_MAX;
        cin >> n;
        for (int i = 0; i < 100 / 2; i++)
        {
            for (int j = 0; j < 100 / 3; j++)
            {
                if (i * 2 + j * 3 == n)
                {
                    int c = i * 4 + j * 5;
                    coin = min(coin, c);
                }
            }
        }
        cout << coin << endl;
    }

    return 0;
}