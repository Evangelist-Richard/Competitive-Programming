// fibonacci-between
// https://toph.co/p/fibonacci-between

#include <iostream>

using namespace std;

int main()
{
    int L, R, sum = 0;
    int a=0, b=1;

    cin >> L >> R;

    while(b <= R)
    {
        if( L<=sum && R>=sum)
            cout << sum << endl;

        sum = a+b;
        a = b;
        b = sum;

    }
    return 0;
}
