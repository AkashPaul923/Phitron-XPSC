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

    int n, q, t = 1;
    while (cin >> n)
    {
        cin >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (q > 0)
            cout << "CASE# " << t << ":" << nl;
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, r = n - 1, mid;
            bool avail = false;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (a[mid] == x)
                {
                    avail = true;
                    break;
                }
                else if (a[mid] < x)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (avail)
                cout << x << " found at " << mid + 1 << nl;
            else
                cout << x << " not found" << nl;
        }
        t++;
    }

    return 0;
}