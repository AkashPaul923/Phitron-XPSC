#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int fre[30] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }
    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] < 1)
        {
            ans = i + 97;
            break;
        }
    }
    if (ans == -1)
        cout << "None";
    else
        cout << char(ans);

    return 0;
}