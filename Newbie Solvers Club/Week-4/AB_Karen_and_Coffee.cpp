#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(200005, 0), p(200005, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }
    for (int i = 1; i <= 200001; i++)
    {
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= 200001; i++)
    {
        if (v[i] >= k)
            p[i] = 1;
    }
    for (int i = 1; i <= 200001; i++)
    {
        p[i] += p[i - 1];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << endl;
    }

    return 0;
}