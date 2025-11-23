#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
const int maxN = (1LL << 15);
vector<int> allPalindrome;

bool isPalindrome(int x)
{
    string s = to_string(x);
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}

void makePalindromes()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
            allPalindrome.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindrome.size(); j++)
        {
            int curr = a[i] ^ allPalindrome[j];
            ans += cnt[curr];
        }
    }
    cout << ans / 2 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    makePalindromes();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}