// 236 A. Boy or Girl
// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;

    sort(s.begin(), s.end());

    for(int i=0; i<s.length(); i++)
    {
            if(s[i] != s[i+1])
                count++;
    }

    cout <<  (count%2 == 0? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}
