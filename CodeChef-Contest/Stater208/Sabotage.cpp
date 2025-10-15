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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        x = x + (k * 100);
        while (k--)
        {
            v.pop_back();
        }

        int r = 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > x)
                r++;
        }
        cout << r << endl;
    }

    return 0;
}