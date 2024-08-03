#include <iostream>
using namespace std;

int main() {
    int n,a =1;
    cin >> n;
    while(a <= n)
    {
        if(a % 3 == 0 || (a - ((a /10)*10)) % 3 == 0)
            cout << 0 << ' ';
        else
            cout << a << ' ';
        a++;
    }
    return 0;
}