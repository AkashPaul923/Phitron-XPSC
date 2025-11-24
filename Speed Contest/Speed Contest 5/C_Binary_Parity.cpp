#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define even cout << "EVEN\n"
#define odd cout << "ODD\n"

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= 31; i++)
    {
        sum += ((n >> i) & 1);
    }
    sum % 2 ? odd : even;
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