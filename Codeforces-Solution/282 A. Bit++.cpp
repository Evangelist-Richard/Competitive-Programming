// 282 A. Bit++
// https://codeforces.com/problemset/problem/282/A

#include <iostream>

using namespace std;

int main()
{
    int n, x=0;
    string s;
    cin >> n;

    while(n--)
    {
        cin >> s;

        (s[1]=='+')? x++ : x-- ;
    }

    cout << x << endl;
    return 0;
}
