#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int count = 0, i = 0, j = n - 1, x = 0, y = n - 1;
        while ((a[i] % 2 != a[j] % 2) && (a[x] % 2 != a[y] % 2))
        {
            count++;
            i++;
            y--;
        }
        cout << count << endl;
    }

    return 0;
}