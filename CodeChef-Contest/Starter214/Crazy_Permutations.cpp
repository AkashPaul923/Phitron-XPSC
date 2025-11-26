#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<string> da(n), db(n);
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > 0)
            da[i] = "i";
        else if (a[i] - a[i - 1] < 0)
            da[i] = "d";
        else
            da[i] = "e";

        if (b[i] - b[i - 1] > 0)
            db[i] = "i";
        else if (b[i] - b[i - 1] < 0)
            db[i] = "d";
        else
            db[i] = "e";
    }
    for (int i = 1; i < n; i++)
    {
        if (da[i] != db[i])
        {
            no;
            return;
        }
    }
    yes;
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