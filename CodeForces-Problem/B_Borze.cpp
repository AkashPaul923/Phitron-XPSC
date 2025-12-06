#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans = "";
    cin >> s;
    int i = 0, n = s.size();
    while (i < n)
    {
        if (s[i] == '-')
        {
            if (s[i + 1] == '-')
            {
                ans += "2";
                i += 2;
            }
            else if (s[i + 1] == '.')
            {
                ans += "1";
                i += 2;
            }
        }
        else if (s[i] == '.')
        {
            ans += "0";
            i++;
        }
    }
    cout << ans << nl;

    return 0;
}