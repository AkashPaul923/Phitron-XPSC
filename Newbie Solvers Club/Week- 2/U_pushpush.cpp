#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    bool rev = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (rev)
        {
            dq.push_front(x);
            rev = !rev;
        }
        else
        {
            dq.push_back(x);
            rev = !rev;
        }
    }
    if (rev)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << dq[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << dq[i] << " ";
        }
    }

    return 0;
}