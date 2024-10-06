// Big Factorials
// https://toph.co/p/big-factorials

#include <iostream>

using namespace std;

int main()
{
    long long n, fact=1;
    cin >> n;

    if(n>=20)
        cout << "0000" << endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact = fact * i;
        }
    cout << fact%10000 << endl;
    }
    return 0;
}
