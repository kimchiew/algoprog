#include <iostream>

using namespace std;

int main()

{
    int N, ans;
    ans = 0;
    N = 1;
    
    while (N != 0)
    {
        cin >> N;
        ans += N;
    }
    cout << ans;
    
    return 0;   
}