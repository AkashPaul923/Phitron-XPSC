#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fre[n+1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        int val;
        cin >> val;
        fre[val]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if(fre[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}