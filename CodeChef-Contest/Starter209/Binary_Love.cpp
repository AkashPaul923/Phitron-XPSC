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
        int n;
        string s;
        cin >> n >> s;
        int c01 = 0, c10 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == "01")
                c01++;
            else if (s.substr(i, 2) == "10")
                c10++;
        }
        if (c01 > 0 && c10 > 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}