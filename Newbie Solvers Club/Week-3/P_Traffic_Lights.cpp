#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> distance;
    lights.insert(0);
    lights.insert(x);
    distance.insert(x);
    while (n--)
    {
        int p;
        cin >> p;
        auto it = lights.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;
        distance.erase(distance.find(right - left));
        distance.insert(right - p);
        distance.insert(p - left);
        lights.insert(p);
        cout << *distance.rbegin() << " ";
    }

    return 0;
}