#include <iostream>

using namespace std;

int main()

{
    int N, count;
    count = 0;
    N = 1;
    
    while (N != 0)
    {
        cin >> N;
        if (N % 2 == 0)
        {
            count += 1;
        }
    }
    cout << count - 1;
    
    return 0;   
}