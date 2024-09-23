// 144 A Arrival of the General
// problem link : https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    int mx = 0, mn = INT_MAX;
    int mx_i = 0, mn_i = 0;  //max and min index

    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> x;

        if(x > mx)
        {
            mx = x;
            mx_i = i;
        }

        if(x <= mn)
        {
            mn = x;
            mn_i = i;
        }
    }
    cout << (mx_i-1)+(n-mn_i) - (mx_i>mn_i? 1:0) << endl;
    return 0;
}
