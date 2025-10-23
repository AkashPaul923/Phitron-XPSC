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
        int x = n;
        cout << 2 << endl;
        for (int i = n - 1; i > 0; i--)
        {
            cout << x << " " << i << endl;
            x = (x + i + 1) / 2;
        }
    }

    return 0;
}