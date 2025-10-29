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
        int n, x;
        cin >> n >> x;
        int m = 0, c = 0;
        while (n >= x)
        {
            m += n;
            n--;
            c++;
        }
        int p = m - (x * c);
        cout << p << endl;
    }

    return 0;
}