// Better Passwords
// https://toph.co/p/better-passwords


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(i==0)
            cout << (char)toupper(s[i]);
        else if(s[i]=='s')
            cout << "$";
        else if(s[i]=='i')
            cout << "!";
        else if(s[i]=='o')
            cout << "()";
        else
            cout << s[i];
    }
    cout << "." << endl;
    return 0;
}
