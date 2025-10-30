#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> lastIndex;
    int ans = 0;
    for (int j = 1, i = 1; j <= n; j++)
    {
        int x;
        cin >> x;
        i = max(i, lastIndex[x] + 1);
        lastIndex[x] = j;
        ans = max(ans, j - i + 1);
    }
    cout << ans << endl;

    return 0;
}