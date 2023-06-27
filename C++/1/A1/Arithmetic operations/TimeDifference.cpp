#include <iostream>

using namespace std;

int main()

{
    int h1, m1, s1, h2, m2, s2, ans;

    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    
    ans = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    cout << ans;
    
    return 0;
}
