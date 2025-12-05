#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
vector<int> p = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        for (int i = 0; i < 12; i++)
        {
            if (p[i] <= n)
            {
                count++;
                n -= p[i];
                break;
            }
        }
    }
    cout << count << nl;
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