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
        int n, m, q;
        cin >> n >> m >> q;
        int a[m + 1];
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + m + 1);
        while (q--)
        {
            int s;
            cin >> s;
            int x = lower_bound(a + 1, a + m + 1, s) - a - 1;
            int y = upper_bound(a + 1, a + m + 1, s) - a;
            if (!x)
                cout << a[y] - 1 << endl;
            else if (y > m)
                cout << n - a[x] << endl;
            else
                cout << (a[y] - a[x])/2 << endl;
        }
    }

    return 0;
}