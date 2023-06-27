#include <iostream>

using namespace std;

int main()
{
    int m, h, min;
    cin >> m;
    h = m / 60 % 24;
    min = m % 60;
    cout << h << " " << min;
       
    return 0;
}
