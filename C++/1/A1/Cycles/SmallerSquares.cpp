#include <iostream>

using namespace std;

int main()

{
    int N, K, ans;
    cin >> N;
    K = 1;
    ans = 1;
    
    while (ans <= N)
    {
        ans = K * K;
        if (ans > N)
            break;
        cout << ans << " " << endl;
        K += 1;
    } 
    
    return 0;   
}