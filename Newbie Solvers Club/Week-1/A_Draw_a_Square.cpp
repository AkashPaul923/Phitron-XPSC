#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << ((l == r && r == d && d == u) ? "Yes" : "No") << endl;
    }

    return 0;
}