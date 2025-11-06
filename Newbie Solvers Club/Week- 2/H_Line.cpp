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
        int n; 
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - i - 1) - i);
                sum += i;
            }
            else
            {
                v.push_back(i - (n - i - 1));
                sum += n - i - 1;
            }
        }
        sort(v.rbegin(), v.rend());
        for (ll vl : v)
        {
            if (vl > 0)
                sum += vl;
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}