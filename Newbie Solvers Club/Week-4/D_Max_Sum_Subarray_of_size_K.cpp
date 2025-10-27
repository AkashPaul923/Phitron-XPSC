#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    long long int i = 0, j = 0, sum = 0, mx = INT_MIN;
    while (j < n)
    {
        sum += v[j];
        if (j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum -= v[i];
            i++;
        }
        j++;
    }
    cout << mx;

    return 0;
}