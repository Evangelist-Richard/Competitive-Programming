// 116 A. Tram
// https://codeforces.com/problemset/problem/116/A

#include <iostream>

using namespace std;

int main()
{
    int n, store=0, max=0;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        store -=a;
        store += b;
        if(store > max)
            max=store;

    }
    cout << max << endl;
    return 0;
}
