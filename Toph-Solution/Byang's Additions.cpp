// Byang's Additions
// https://toph.co/p/byang-learns-to-add-almost

#include <iostream>

using namespace std;

int main()
{
    string A, B;
    int sum;
    cin >> A >> B;

    while(A.size() < 10)
        A = "0" + A;

    while(B.size() < 10)
        B = "0" + B;

    for(int i=A.length()-1; i>=0; i--)
    {
        sum = (A[i]-'0') + (B[i]-'0');
        if(sum > 9)
        {
             cout << "YES" << endl;
             return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
