#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq;
    int t;
    cin >> t;
    bool rev = false;
    while (t--)
    {
        string com;
        cin >> com;
        if (com == "toFront")
        {
            int x;
            cin >> x;
            if (rev)
                dq.push_back(x);
            else
                dq.push_front(x);
        }
        else if (com == "push_back")
        {
            int x;
            cin >> x;
            if (rev)
                dq.push_front(x);
            else
                dq.push_back(x);
        }
        else if (com == "front")
        {
            if (!dq.empty())
            {
                if (rev)
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }
        else if (com == "back")
        {
            if (!dq.empty())
            {
                if (rev)
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }
        else if (com == "reverse")
        {
            rev = !rev;
        }
    }

    return 0;
}