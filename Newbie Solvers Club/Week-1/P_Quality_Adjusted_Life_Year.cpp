#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    while (n--)
    {
        double q, y;
        cin >> q >> y;
        sum += q * y;
    }
    printf("%.3f", sum);

    return 0;
}