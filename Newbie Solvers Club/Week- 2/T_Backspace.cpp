#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    deque<char> dq;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            if (!dq.empty())
            {
                dq.pop_back();
            }
        }
        else
        {
            dq.push_back(s[i]);
        }
    }
    for (auto c : dq)
    {
        cout << c;
    }

    return 0;
}