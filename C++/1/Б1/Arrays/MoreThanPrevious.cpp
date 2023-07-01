#include <iostream>

using namespace std;

int main()
{
    int i, N, el, count;
    cin >> N;
    int arr[N];
    count = 0;
    
    for (i = 0; i < N; i++)
    {
        cin >> el;
        arr[i] = el;
    }
    for (i = 0; i < N - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count += 1;
        }
    }
    cout << "\n" << count;
    

    return 0;
}
