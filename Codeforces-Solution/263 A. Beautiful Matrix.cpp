// 263 A. Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A

#include <iostream>

using namespace std;

int main()
{
    int a[5][5];
    int row, column, count=0;

    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            cin >> a[i][j];

            if(a[i][j]==1)
            {
                row=i+1;
                column=j+1;
            }
        }
    }

    if(row < 3)
        count = 3-row;
    else if(row > 3)
        count = row-3;

    if(column < 3)
        count = count + (3-column);
    else if(column > 3)
        count = count + (column-3);

    cout << count << endl;
    return 0;
}
