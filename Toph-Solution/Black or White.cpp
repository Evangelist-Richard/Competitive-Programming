// Black or White
// https://toph.co/p/black-or-white

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    int sum = (a - '0') + (b - '0');
    cout << (sum%2? "White":"Black") << endl;

    return 0;
}
