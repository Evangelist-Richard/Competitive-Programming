// 141 A. Amusing Joke
// https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3, s;
    cin >> s1 >> s2 >> s;

    s3 = s1 + s2;

    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    cout << (s==s3? "YES": "NO") << "\n";
    return 0;
}
