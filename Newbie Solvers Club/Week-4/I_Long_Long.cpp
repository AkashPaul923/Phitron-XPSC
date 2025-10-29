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
        long long int sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        int i = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                count++;
                while (i < n && v[i] < 1)
                    i++;
            }
            else
            {
                i++;
            }
        }
        cout << sum << " " << count << endl;
    }

    return 0;
}