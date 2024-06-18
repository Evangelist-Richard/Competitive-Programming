// 110A_Nearly_Lucky_Number
// https://codeforces.com/problemset/problem/110/A

#include <iostream>

using namespace std;

int main()
{
    long long n, count=0;
    cin >> n;

    while(n!=0)
    {
        if(n%10 == 4 || n%10 == 7)
        {
             count++;
        }
        n/=10;

    }

    (count==4 || count ==7)? cout << "YES" << endl: cout << "NO" << endl;

    return 0;
}
