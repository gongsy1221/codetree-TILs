#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 0, c =0 , cnt = 1;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        if(cnt % 12 == 0)
            c++;
        else if(cnt % 3 == 0)
            b++;
        else if(cnt % 2 == 0)
            a++;
        cnt++;
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}