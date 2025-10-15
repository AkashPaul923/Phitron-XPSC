#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 1)
                x = x - (n - i);
            else
                x = x + (n - i);
        }
        cout << x << endl;
    }

    return 0;
}