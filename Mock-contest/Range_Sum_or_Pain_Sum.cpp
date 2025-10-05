#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    long long int pre[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        long long int val = (i + 1) / 2;
        pre[i] = pre[i - 1] + val;
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }

    return 0;
}