// toph
// Closest Pair
// https://toph.co/p/closest-pair

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double d, mn = INFINITY;
    cin >> n;

    vector<vector<int>> a(n, vector<int> (2));

    for(int i=0; i<n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n-1; i++)
    {
        d = sqrt(pow(a[i+1][0]-a[i][0], 2) + pow(a[i+1][1]-a[i][1], 2));
        mn = min(mn, d);
    }
    cout << mn << endl;
    return 0;
}
