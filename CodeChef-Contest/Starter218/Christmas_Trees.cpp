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

    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    cout << (x * y) - (n * m);

    return 0;
}