#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (ml.upper_bound(x) != ml.end())
        {
            ml.erase(ml.upper_bound(x));
            ml.insert(x);
        }
        else
        {
            ml.insert(x);
        }
    }
    cout << ml.size();

    return 0;
}