#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, odd = 0;
    cin >> n;
    int it = n;
    while (it--)
    {
        int x;
        cin >> x;
        if (x % 2)
            odd++;
    }
    if(n == 1 || odd % 2 == 0)
        cout << 1 << nl;
    else
        cout << 2 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}