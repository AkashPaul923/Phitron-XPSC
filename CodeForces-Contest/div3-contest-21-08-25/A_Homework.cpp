#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3;
        int n, m;
        cin >> n >> s1 >> m >> s2 >> s3;
        for (int i = 0; i < s3.size(); i++)
        {
            if (s3[i] == 'D')
            {
                s1.push_back(s2[i]);
            }
            else
            {
                s1.insert(s1.begin(), s2[i]);
            }
        }
        cout << s1 << endl;
    }

    return 0;
}