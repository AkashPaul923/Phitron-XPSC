#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll move = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            move += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }
    cout << move;

    return 0;
}