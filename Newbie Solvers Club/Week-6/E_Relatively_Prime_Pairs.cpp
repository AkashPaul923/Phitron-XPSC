#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    ll i = l, j = l + 1;
    while (j <= r)
    {
        cout << i << " " << j << endl;
        i += 2, j += 2;
    }

    return 0;
}