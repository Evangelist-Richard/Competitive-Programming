// 281A_Word_Capitalization
// https://codeforces.com/problemset/problem/281/A

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s << endl;

    return 0;
}
