// 427 A. Police Recruit
// https://codeforces.com/problemset/problem/427/A

#include <iostream>

using namespace std;

int main()
{
    int n, p=0, c=0;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==-1)
        {
            if(p==0)
                c++;
            if(p>0)
            {
                p--;
            }
        }
        else
            p=p+a[i];
    }
    cout << c << endl;
    return 0;
}
