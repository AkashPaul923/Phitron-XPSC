#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                cnt++;
        cout << (cnt * (cnt - 1)) + ((n - cnt) * (cnt + 1)) << endl;
    }

    return 0;
}