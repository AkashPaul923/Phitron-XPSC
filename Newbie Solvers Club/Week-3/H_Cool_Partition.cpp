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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 1;
        set<int> s1;
        set<int> s2;
        s1.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            s2.insert(v[i]);
            if (s1.find(v[i]) != s1.end())
                s1.erase(s1.find(v[i]));
            if (s1.empty())
            {
                count++;
                s1 = s2;
                s2.clear();
            }
        }
        cout << count << endl;
    }

    return 0;
}