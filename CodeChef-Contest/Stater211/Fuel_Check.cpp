#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (x * y >= 100)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}