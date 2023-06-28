#include <iostream>

using namespace std;

int main()

{
    int a, b;
    
    cin >> a >> b;
    
    if (a % 2 == 0)
    {
        for ( int i = 0; i < b - (a - 1); i = i + 2 )
        {
            cout << a + i << " ";
        }
    }
    else
    {
         for ( int i = 1; i <= b - a; i = i + 2 )
        {
            cout << a + i << " ";
        }
    }
    
    
    return 0;
}
