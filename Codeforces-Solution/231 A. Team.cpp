// 231 A. Team
// https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n, count=0;
    string s;
    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c;
        if( a==1 && b==1 && c==1 || a==0 && b==1 && c==1 || a==1 && b==0 && c==1 || a==1 && b==1 && c==0)
            count++;
    }

    cout << count << endl;

    return 0;
}
