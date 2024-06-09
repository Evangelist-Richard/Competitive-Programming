// https://toph.co/p/hashtag

#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
            continue;
        cout << s[i];
    }
    cout << "\n";
    return 0;
}
