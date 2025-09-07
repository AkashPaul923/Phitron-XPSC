#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bool isRoll = false;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (x + (y + i) + (y + j) == 50)
                    isRoll = true;
            }
        }
        cout << (isRoll ? "Yes\n" : "No\n");
    }

    return 0;
}