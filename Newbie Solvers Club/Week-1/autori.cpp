#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch;
        }
    }

    return 0;
}