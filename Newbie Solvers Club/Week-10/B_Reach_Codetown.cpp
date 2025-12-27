#include <bits/stdc++.h>
using namespace std;

bool vowel(char ch)
{
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (!vowel(s[0]) && vowel(s[1]) && !vowel(s[2]) && vowel(s[3]) && !vowel(s[4]) && vowel(s[5]) && !vowel(s[6]) && !vowel(s[7]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}