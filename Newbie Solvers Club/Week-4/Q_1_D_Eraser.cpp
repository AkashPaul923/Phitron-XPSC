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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'B')
            {
                dp[i] = min(dp[i - 1] + 1, dp[max(0, i - k)] + 1);
            }
            else
            {
                dp[i] = dp[i - 1];
            }
        }

        cout << dp[n] << endl;
    }

    return 0;
}