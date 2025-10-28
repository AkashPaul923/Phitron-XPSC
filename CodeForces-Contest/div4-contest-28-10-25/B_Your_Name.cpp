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
        string s, t;
        cin >> s >> t;
        int fre1[26] = {0}, fre2[26] = {0};
        for (int i = 0; i < n; i++)
        {
            fre1[s[i] - 'a']++;
            fre2[t[i] - 'a']++;
        }
        bool isPoss = true;
        for (int i = 0; i < 26; i++)
        {
            if (fre1[i] != fre2[i])
            {
                isPoss = false;
                break;
            }
        }
        if (isPoss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}