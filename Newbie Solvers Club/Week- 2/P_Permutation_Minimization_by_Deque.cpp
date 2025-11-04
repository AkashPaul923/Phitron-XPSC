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
        int n, idx = 0;
        cin >> n;
        deque<int> v;
        int val;
        cin >> val;
        v.push_back(val);
        for (int i = 1; i < n; i++)
        {
            cin >> val;
            if (val < v.front())
                v.push_front(val);
            else
                v.push_back(val);
        }
        int k = 0;
        while (!v.empty())
        {
            k++;
            cout << v.front() << " ";
            v.pop_front();
        }
        cout << endl;
    }

    return 0;
}