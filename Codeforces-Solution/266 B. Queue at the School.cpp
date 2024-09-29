// 266 B Queue at the School
// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    string s;

    cin >> n >> t;
    cin.ignore();
    cin >> s;

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n;)
        {
            if(s[j]!=n-1 && s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j+=2;
                continue;
            }
            j++;
        }
    }
    cout << s << endl;
    return 0;
}
