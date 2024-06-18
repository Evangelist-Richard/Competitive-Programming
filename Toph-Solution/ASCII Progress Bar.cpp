// ASCII Progress Bar
// https://toph.co/p/ascii-progress-bar#:~:text=In%20this%20problem%2C%20you%20need,point%20number%20representing%20the%20percentage.&text=Given%20the%20percentage%20in%20floating,becomes%2060%20and%20so%20on).

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "[";
    for(int i=0; i<10; i++)
    {
        if(i < n/10)
            cout << "+";
        else
            cout << ".";
    }
    cout << "] " << n << "%\n";
    return 0;
}
