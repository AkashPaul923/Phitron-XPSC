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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool isInt = false;
        for (int i = 0; i < n-2; i++)
        {
            if(a[i] == a[i+1] && a[i+1] == a[i+2])
                isInt = true;
            else if(a[i] > a[i+1] && a[i+1] > a[i+2])
                isInt = true;
            else if(a[i] < a[i+1] && a[i+1] < a[i+2])
                isInt = true;
        }
        if (isInt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}