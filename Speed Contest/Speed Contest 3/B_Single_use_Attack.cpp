#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        double h, x, y;
        cin >> h >> x >> y;
        cout << ceil((h - y) / x) + 1 << endl;
    }

    return 0;
}