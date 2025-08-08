#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mn = INT_MAX;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int d = s[i] - '0';
            mn = min(mn, d);
        }
        cout << mn << endl;
    }

    return 0;
}