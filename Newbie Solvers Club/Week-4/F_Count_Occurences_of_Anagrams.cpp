#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt, pat;
    cin >> txt >> pat;

    map<char, int> mp, ans;
    for (char &c : pat)
        ans[c]++;
    int l = 0, r= 0, count = 0;
    while (r < txt.size())
    {
        mp[txt[r]]++;
        if (r - l + 1 == pat.size())
        {
            if (mp == ans)
                count++;
            mp[txt[l]]--;
            if (mp[txt[l]] == 0)
                mp.erase(txt[l]);
            l++;
        }
        r++;
    }
    cout << count;

    return 0;
}