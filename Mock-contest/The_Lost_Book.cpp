#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> val;
    int idx = -1, i = 0;
    while (i < n)
    {
        if (a[i] == val)
        {
            idx = i;
            break;
        }
        i++;
    }
    cout << idx << endl;

    return 0;
}