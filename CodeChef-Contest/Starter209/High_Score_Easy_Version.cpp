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
        int n, m;
        cin >> n >> m;
        multiset<int> ml1;
        multiset<int> ml2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml1.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            ml2.insert(x);
        }
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            auto x = ml1.begin();
            auto y = --ml2.end();
            if (*x != *y)
                score += *x + *y;
            ml1.erase(x);
            ml2.erase(y);
        }
        cout << score << endl;
    }

    return 0;
}