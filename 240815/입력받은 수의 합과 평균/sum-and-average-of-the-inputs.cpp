#include <iostream>
using namespace std;

int main() {
    int n, a, sum =0;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (float)sum /n;
    return 0;
}