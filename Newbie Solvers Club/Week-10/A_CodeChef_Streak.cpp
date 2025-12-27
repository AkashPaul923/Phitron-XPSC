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
    int cnta = 0, mxa = INT_MIN, cntb = 0, mxb = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
        {
            cnta++;
            mxa = max(mxa, cnta);
        }
        else
        {
            cnta = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i])
        {
            cntb++;
            mxb = max(mxb, cntb);
        }
        else
        {
            cntb = 0;
        }
    }
    if (mxa > mxb)
        cout << "Om\n";
    else if (mxa < mxb)
        cout << "Addy\n";
    else
        cout << "Draw\n";
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
