#include <iostream>

using namespace std;

int main()

{
    int N, ans;
    ans = 1;
    
    cin >> N;
    
    for(int i = 1; i < N + 1; i++)
    {
        ans = ans * i;
    }
    
    cout << ans;
    
    return 0;
}
