#include <iostream>

using namespace std;

int main()

{
    int N, ans;
    cin >> N;
    ans = 2;
    
    while (ans <= N)
    {
        if (N % ans == 0)
        {
            break;
        }
        ans += 1;
    }
    cout << ans;
    
    return 0;   
}