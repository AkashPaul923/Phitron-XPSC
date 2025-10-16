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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int happy = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                if (b[i] * 2 >= a[i])
                    happy++;
            }
            else
            {
                if (a[i] * 2 >= b[i])
                    happy++;
            }
        }
        cout << happy << endl;
    }

    return 0;
}