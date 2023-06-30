#include <iostream>

using namespace std;


int main()
{
    int N, i, a;
    cin >> N;
    int arr[N];
    
    for (i = 0; i < N; i++)
    {
        cin >> a;
        arr[i] = a;
        if (arr[i] % 2) continue;
        cout << arr[i] << " ";
    }

    
    return 0;
}
