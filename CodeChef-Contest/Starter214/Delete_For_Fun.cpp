// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define ld long double
// #define nl '\n'
// #define yes cout << "Yes\n"
// #define no cout << "No\n"

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     int one = 0, zero = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '1')
//             one++;
//         else
//             zero++;
//     }
//     if (one != zero || s[k - 1] == '0')
//     {
//         cout << -1 << nl;
//         return;
//     }

//     vector<int> one1, zero0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '1')
//             one1.push_back(i + 1);
//         else
//             zero0.push_back(i + 1);
//     }

//     for (int i = one1.size() - 1; i >= 0; i--)
//     {
//         if (one1[i] == k)
//         {
//             cout << one1[i] << " " << zero0.back() << " ";
//             one1.erase(one1.begin() + i);
//             zero0.pop_back();
//         }
//     }
//     for (int i = one1.size() - 1; i >= 0; i--)
//     {
//         cout << one1[i] << " " << zero0[i] << " ";
//     }

//     cout << nl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

