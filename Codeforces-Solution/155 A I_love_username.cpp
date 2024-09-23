// 155 A. I_love_username
// https://codeforces.com/problemset/problem/155/A

#include <iostream>

using namespace std;

int main()
{
    int n, x, amazing = 0;
    cin >> n >> x;
    int max = x, min = x;
    n -= 1;

    while(n--)
    {
        cin >> x;

        if(x > max)
        {
            max = x;
            amazing++;
        }
        else if(x < min)
        {
            min = x;
            amazing++;
        }
    }
    cout << amazing << endl;
    return 0;
}
