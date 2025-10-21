#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    multiset<pair<int, pair<int, int>>> mst;
    mst.insert({x + 1, {0, x}});
    while (n--)
    {
        int p;
        cin >> p;
        auto temp = mst.rbegin();
        if (p >= temp->second.first && p <= temp->second.second)
        {
            pair<int, pair<int, int>> first = {p - temp->second.first, {temp->second.first, p}};
            mst.insert(first);
            pair<int, pair<int, int>> second = {temp->second.second - p, {p, temp->second.second}};
            mst.insert(second);
            mst.erase(--mst.end());
        }
        cout << mst.rbegin()->first << " ";
    }

    return 0;
}