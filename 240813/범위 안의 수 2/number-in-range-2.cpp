#include <iostream>
using namespace std;

int main() {
    int a, sum =0, cnt=0;
    for(int i =0; i < 10; i++)
    {
        cin >> a;
        if(a >= 0 && a <= 200)
        {
            sum += a;
            cnt++:
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (float)sum/cnt;
    return 0;
}