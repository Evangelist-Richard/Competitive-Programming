// 228 A. Is your horseshoe on the other hoof?
// https://codeforces.com/problemset/problem/228/A
// @Evangelist_Richard


#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set <int> s = {a,b,c,d};

    cout << 4-s.size() << endl;
    return 0;
}
