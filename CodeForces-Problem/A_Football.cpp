#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;
    bool isDen = false;
    for (int i = 0; i < s.size() -1; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
            if(count == 7)
            {
                isDen = true;
                break;
            }
        }
        else
            count = 1;
    }
    
    isDen ? cout << "YES" : cout << "NO";

    return 0;
}