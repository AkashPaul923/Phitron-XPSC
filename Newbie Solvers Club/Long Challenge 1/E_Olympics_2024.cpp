#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, s, b;
    cin >> g >> s >> b;
    cout << 15 - (g + s + b) << nl;

    return 0;
}