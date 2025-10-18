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
        cin >> n;
        string a, b;
        cin >> a >> b;
        int freeOdd = 0, freeEven = 0, odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
            {
                if (i % 2 == 0)
                    freeEven++;
                else
                    freeOdd++;
            }
            if (a[i] == '1')
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if (freeEven >= odd && freeOdd >= even)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}