#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int fre[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'A']++;
    }
    int oddCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] % 2 == 1)
            oddCount++;
    }
    if (oddCount > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        string ans = "";
        int idx = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 0)
            {
                ans.insert(idx, fre[i], char(i + 65));
                idx += fre[i] / 2;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 1)
            {
                ans.insert(idx, fre[i], char(i + 65));
            }
        }
        cout << ans;
    }

    return 0;
}