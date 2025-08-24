#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v;
        int k = 1;
        int c = 0;
        while (true)
        {
            long long int d = 1 + pow(10, k);
            if (d >= n || d > 1000000000000001)
                break;
            if (n % d == 0)
            {
                v.push_back(n / d);
            }
            k++;
        }
        cout << v.size() << endl;
        if (v.size() > 0)
        {
            reverse(v.begin(), v.end());
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}