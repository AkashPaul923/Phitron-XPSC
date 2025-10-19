#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int c, x;
        cin >> c >> x;
        if (c == 1)
        {
            s.insert(x);
        }
        else if (c == 2)
        {
            if (s.find(x) != s.end())
                s.erase(x);
        }
        else
        {
            if (s.find(x) == s.end())
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }

    return 0;
}