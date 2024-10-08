// Butcher of Vowels
// https://toph.co/p/butcher-of-vowels

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        bool flag = false;
        cin >> s;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                flag = true;
                break;
            }
        }

        cout << (flag==1? "Yes": "No") << endl;
    }
    return 0;
}
