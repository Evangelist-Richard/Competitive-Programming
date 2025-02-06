// 344 A. Magnets
// https://codeforces.com/problemset/problem/344/A'

#include <iostream>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        if(i > 0)
        {
            (a[i]==a[i-1])? count=count: count++;
        }
    }
    cout << count+1 << endl;
    return 0;
}
