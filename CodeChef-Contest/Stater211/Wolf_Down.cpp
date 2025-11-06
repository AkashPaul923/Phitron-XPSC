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
        int i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                break;
            }
            i++;
        }
        cout << i << endl;
    }

    return 0;
}