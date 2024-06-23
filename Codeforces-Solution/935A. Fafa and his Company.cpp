// 935A. Fafa and his Company
// https://codeforces.com/problemset/problem/935/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

       for(int i=1; i<=n/2; i++)
       {
           if(n%i == 0)
            cnt++;
       }
       cout << cnt << endl;
    return 0;
}
