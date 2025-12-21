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

    int a, b;
    cin >> a >> b;
    ll slice = (a + 1) * 4 + b * 3;
    int pizza = slice / 8;
    if (slice % 8 != 0)
        pizza++;
    cout << pizza;

    return 0;
}