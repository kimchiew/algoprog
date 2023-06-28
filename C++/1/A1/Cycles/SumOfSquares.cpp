#include <iostream>

using namespace std;

int main()

{
    int N, ans;
    cin >> N;
    ans = 0;
    
    for (int i = 1; i < N + 1; i++)
    {
        ans = ans + i * i;
    }
    cout << ans;
 
    return 0;   
}
