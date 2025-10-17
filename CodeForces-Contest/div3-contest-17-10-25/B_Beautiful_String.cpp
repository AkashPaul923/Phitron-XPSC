#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                ans.push_back(i + 1);
        }
        cout << ans.size() << '\n';
        for (auto val : ans)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}