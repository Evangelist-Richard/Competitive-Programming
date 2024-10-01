//============================================================================
// Name        : 271 A. Beautiful Year
// Problem link: https://codeforces.com/problemset/problem/271/A
// Author      : evangelist richard
// Copyright   : use it under your responsibility
// Status      : accepted
// Date        : 01-10-2024
//============================================================================

#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;

    while(y++)
    {
        int a = y%10;
        int b = (y/10) % 10;
        int c = (y/100) % 10;
        int d = y/1000;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
    }

    cout << y << endl;

    return 0;

}
