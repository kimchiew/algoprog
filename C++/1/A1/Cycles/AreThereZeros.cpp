#include <iostream>

using namespace std;

int main()

{
    int N, n, i;
    string ans;
    i = 0;
    cin >> N;
    ans = "NO";
    
    for (i; i < N; i++)
    {
        cin >> n;
        if (n == 0)
        {
            ans = "YES";
        }
    }
    cout << ans;
    
    return 0;   
}