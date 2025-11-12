#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        bool isStart = false;
        for (int i = 0; i < n; i++)
        {
            if (!isStart && s[i] == '0')
                isStart = true;
            if (isStart && s[i] == '1')
                count++;
        }
        cout << count << endl;
    }

    return 0;
}