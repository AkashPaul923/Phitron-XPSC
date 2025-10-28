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
        vector<int> v(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 1)
                odd++;
            else
                even++;
        }
        // if(odd == 0 || even == 0)
        // {
        //     for(int vl : v)
        //         cout << vl << " ";
        //     cout << endl;
        // }
        // else
        // {
        //     sort(v.begin(), v.end());
        //     for(int vl : v)
        //         cout << vl << " ";
        //     cout << endl;
        // }
        if (odd > 0 && even > 0)
            sort(v.begin(), v.end());
        for (int vl : v)
            cout << vl << " ";
        cout << endl;
    }

    return 0;
}