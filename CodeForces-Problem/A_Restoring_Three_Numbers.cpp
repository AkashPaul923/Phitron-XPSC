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

    int x[4];
    for (int i = 0; i < 4; i++)
        cin >> x[i];
    sort(x, x + 4);
    int a = x[3] - x[2];
    int b = x[0] - a;
    int c = x[1] - a;
    cout << a << " " << b << " " << c << nl;

    return 0;
}