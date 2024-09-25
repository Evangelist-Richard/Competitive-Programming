// 200 B. Drinks
// https://codeforces.com/problemset/problem/200/B

#include <iostream>

using namespace std;

int main()
{
    int n, a;
    double sum=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << sum/n << endl;
    return 0;
}
