#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> l;
    while (n--)
    {
        int val;
        cin >> val;
        l.push_back(val);
    }
    int s = 0, d = 0;
    while (l.size() != 0)
    {
        if (l.size() == 1)
        {
            s += l.front();
            l.pop_front();
        }
        else
        {
            if (l.front() > l.back())
            {
                s += l.front();
                l.pop_front();
            }
            else
            {
                s += l.back();
                l.pop_back();
            }
            if (l.front() > l.back())
            {
                d += l.front();
                l.pop_front();
            }
            else
            {
                d += l.back();
                l.pop_back();
            }
        }
    }
    cout << s << " " << d;

    return 0;
}