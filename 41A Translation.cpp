// https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int cnt=0;

    cin >> s;
    cin >> t;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==t[s.length()-1-i])
            cnt++;
    }

    (cnt == s.length()) ? cout << "YES" << endl: cout << "NO" << endl;
    return 0;
}
