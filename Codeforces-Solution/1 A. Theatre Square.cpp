//============================================================================
// Name        : 1 A. Theatre Square
// Problem link: http://codeforces.com/problemset/problem/1/A
// Author      : evangelist richard
// Copyright   : use it under your responsibility
// Status      : accepted
// Date        : 30-09-2024
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, a, ans = 0;
    cin >> m >> n >> a;

    ans = ceil((double)m/a) * ceil((double)n/a);
    cout << ans << endl;

    return 0;
}
