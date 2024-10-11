// Clock Math
// https://toph.co/p/clock-math

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, m, ans;
    cin >> h >> m;

    ans = abs((0.5*11*m) - 30*h);

    printf("%0.4f\n", min(ans, 360-ans));

    return 0;
}
