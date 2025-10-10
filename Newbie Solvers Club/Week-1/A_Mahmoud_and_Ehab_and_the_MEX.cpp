#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int a[n];
    int fre[101] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }
    int op = 0;
    for (int i = 0; i < e; i++)
        if (fre[i] == 0)
            op++;
    if (fre[e] > 0)
        op++;
    cout << op;

    return 0;
}