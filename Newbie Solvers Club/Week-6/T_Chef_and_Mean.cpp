#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        map<long double, int> ml;
        long double sum = 0;
        for (int i = 0; i < n; i++)
        {
            long double x;
            cin >> x;
            sum += x;
            if (ml.find(x) == ml.end())
                ml[x] = i + 1;
        }
        long double mean = (long double)sum / n;
        auto it = ml.find(mean);
        if (it == ml.end())
            cout << "Impossible\n";
        else
            cout << it->second << endl;
    }

    return 0;
}