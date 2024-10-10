// Caesar Cipher
// https://toph.co/p/caesar-cipher

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char a = 'a', z = 'z';
    cin >> n;

    cin.ignore();
    string s;
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        int pos = int(s[i])-n;

        if(s[i]==' ')
            cout << " ";

        else if(pos < int(a))
            cout << char((int(z)+(int(s[i])-int(a))) - (n-1));

        else
            cout << char(pos);
    }
    cout << "\n";
    return 0;
}
