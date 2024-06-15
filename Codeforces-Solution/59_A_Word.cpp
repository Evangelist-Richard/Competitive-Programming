// 59_A_Word
// https://codeforces.com/problemset/problem/59/A

#include <iostream>

using namespace std;

int main()
{
    string s;
    int upper=0, lower=0;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        (isupper(s[i])) ? upper++: lower++;
    }

    if(upper > lower)
    {
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            ch = toupper(s[i]);
            cout << ch;
        }
    }

    else
    {
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            ch = tolower(s[i]);
            cout << ch;
        }
    }

    cout << endl;
    return 0;
}
