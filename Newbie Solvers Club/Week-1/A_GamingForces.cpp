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
        int arr[n];
        int totalOne = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                totalOne++;
            }
        }
        cout << ((totalOne + 1) / 2) + (n - totalOne) << endl;
    }

    return 0;
}