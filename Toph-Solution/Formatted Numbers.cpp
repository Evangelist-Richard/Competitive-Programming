// Formatted Numbers
// https://toph.co/p/formatted-numbers

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    for(int i=0; i<n; i++)
    {
        if((n-i)%3 == 0)
            cout << ",";
        cout << s[i];
    }
    cout << "\n";
    return 0;
}
