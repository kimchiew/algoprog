#include <iostream>

using namespace std;

int main()

{
    int a;
    cin >> a;
    
    if (a > 0)
    {
        cout << 1;
    }
    else if (0 > a)
    {
        cout << -1;
    }
    else 
    {
        cout << 0;
    }
    
    return 0;
}
