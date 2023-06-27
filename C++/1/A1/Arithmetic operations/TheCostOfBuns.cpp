#include <iostream>

using namespace std;

int main()

{
    int a, b, sk, k, ansA, ansB;
    cin >> a;
    cin >> b;
    cin >> k;
    
    sk = (a * 100 + b) * k;
    ansA = sk / 100;
    ansB = sk % 100;
    
    cout << ansA << " " << ansB;
       
    return 0;
}
