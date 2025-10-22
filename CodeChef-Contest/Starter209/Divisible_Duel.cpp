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
        int x, y;
        cin >> x >> y;
        int i = 0;
        int odd = 0, even = 0;
        while (x * i <= y)
        {
            if ((x * i) % 2 == 0)
                even += x * i;
            else
                odd += x * i;

            i++;
        }
        if (even >= odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}