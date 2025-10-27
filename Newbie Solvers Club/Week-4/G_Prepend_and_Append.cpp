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
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        while (j > i)
        {
            if (s[i] == s[j])
                break;
            i++;
            j--;
        }
        cout << j - i + 1 << endl;
    }

    return 0;
}
