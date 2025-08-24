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
        int fre[105] = {0};
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            fre[a[i]]++;
        }
        bool flag = false;
        for (int x : fre)
        {
            if (x >= 2)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}