// 268 A. Games
// https://codeforces.com/problemset/problem/268/A

#include <iostream>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    int a[n][2];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][0]==a[j][1])
                count=count+1;
        }
    }
    cout << count << endl;
    return 0;
}
