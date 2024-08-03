// 151A. Soft Drinking
// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    int drink, lime, salt;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    drink = (k * l) / nl;
    lime = c * d;
    salt = p / np;

    cout << min(drink, min(lime, salt)) / n << endl;

    return 0;
}
