// Decent Arrays
// https://toph.co/p/decent-arrays

#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                flag=false;
                break;
            }
        }
    }

    cout << (flag? "Yes": "No")<< endl;
    return 0;
}
