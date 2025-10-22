#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

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
        multiset<pair<int, int>> dq;
        for (int i = 1; i <= n; i++)
        {
            int g = gcd(i, n);
            dq.insert({-g, i});
        }
        for (auto [x, y] : dq)
            cout << y << " ";

        cout << endl;
    }

    return 0;
}