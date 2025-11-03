#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        string s;
        cin >> s;
        bool p = true;
        int e = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                if (e <= 0)
                {
                    p = false;
                    break;
                }
                else
                {
                    e--;
                }
            }
            else
            {
                e = x;
            }
        }
        cout << (p ? "YES" : "NO") << endl;
    }

    return 0;
}