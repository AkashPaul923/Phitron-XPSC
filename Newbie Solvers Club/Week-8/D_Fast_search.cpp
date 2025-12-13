#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto L = lower_bound(a.begin(), a.end(), l);
        auto R = upper_bound(a.begin(), a.end(), r);
        cout << R - L << " ";
    }

    return 0;
}