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
        int w, p, k;
        cin >> w >> p >> k;
        if (k <= w)
            cout << k * 2 << endl;
        else
            cout << (w * 2) + (k - w) << endl;
    }

    return 0;
}