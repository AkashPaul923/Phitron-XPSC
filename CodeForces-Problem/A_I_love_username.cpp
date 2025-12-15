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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int greater = a[0], smaller = a[0], count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > greater)
        {
            greater = a[i];
            count++;
        }
        if (a[i] < smaller)
        {
            smaller = a[i];
            count++;
        }
    }
    cout << count++;

    return 0;
}