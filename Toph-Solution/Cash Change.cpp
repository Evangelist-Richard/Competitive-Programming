#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cash;
    vector<int> store;
    cin >> cash;

    while(cash != 0)
    {
        int n = 0;
        if(cash >= 500)
        {
            n = cash / 500;
            for(int i=1; i<=n; i++)
                store.push_back(500);
            cash -= (500*n);
        }

        else if(cash >= 100 && cash < 500)
        {
            n = cash / 100;
            for(int i=1; i<=n; i++)
                store.push_back(100);
            cash -= (100*n);
        }

        else if(cash >= 50 && cash < 100)
        {
            n = cash / 50;
            for(int i=1; i<=n; i++)
                store.push_back(50);
            cash -= (50*n);
        }

        else if(cash >= 10 && cash < 50)
        {
            n = cash / 10;
            for(int i=1; i<=n; i++)
                store.push_back(10);
            cash -= (10*n);
        }

        else if(cash >= 5 && cash < 10)
        {
            n = cash / 5;
            for(int i=1; i<=n; i++)
                store.push_back(5);
            cash -= (5*n);
        }

        else if(cash >= 1 && cash < 5)
        {
            for(int i=1; i<=cash; i++)
                store.push_back(1);
            cash = 0;
        }
    }

    for(int i=store.size()-1; i>=0; i--)
        cout << store[i] << " ";
    cout << endl;
    return 0;
}
