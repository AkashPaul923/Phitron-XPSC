#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        // print only odd ith
        if (i % 2 == 1)
        {
            cout << s << endl;
        }
    }

    return 0;
}