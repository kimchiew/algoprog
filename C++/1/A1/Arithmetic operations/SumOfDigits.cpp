#include <iostream>
using namespace std;

int main()
{
    int N, ans;
    cin >> N;
    ans = (N / 10 % 10) + (N / 100) + (N % 10);
    cout << ans;
    
    return 0;
    
}
 