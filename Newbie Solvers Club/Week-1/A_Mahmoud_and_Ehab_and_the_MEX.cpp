#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int op = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == e)
        {
            op = 1;
        }
    }
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (i != a[i])
            break;
        mx++;
    }
    if (op == 1)
    {
        cout << e - mx + op;
    }
    else
    {
        cout << e - mx - 1;
    }

    return 0;
}