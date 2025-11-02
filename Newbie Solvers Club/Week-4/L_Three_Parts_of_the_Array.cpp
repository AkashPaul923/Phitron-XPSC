#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        p[i] += p[i - 1];
    }
    ll mx = 0, i = 1, j = n;
    while (i < j)
    {
        ll left = p[i], right = p[n] - p[j - 1];
        if (left == right)
        {
            mx = max(mx, left);
            i++, j--;
        }
        else if (left < right)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << mx;

    return 0;
}