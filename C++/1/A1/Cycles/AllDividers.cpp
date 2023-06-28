#include <iostream>

using namespace std;

int main()

{
    int N, i, ans;
    i = 0;
    cin >> N;
    
    while (i <= N)
    {
        i += 1;
        
        if (N % i == 0)
        {
            cout << i << ' ';
        }
    }
    
    return 0;   
}
