#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0, count = 0;
    while (j < m)
    {
        while (i < n)
        {
            if (a[i] >= b[j])
                break;
            count++;
            i++;
        }
        cout << count << " ";
        j++;
    }

    return 0;
}