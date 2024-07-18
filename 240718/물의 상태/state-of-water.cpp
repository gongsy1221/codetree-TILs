#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a < 0)
        cout << "ice";
    else if(a >= 100)
        cout << "vapor";
    else if(0 < a <= 100)
        cout << "water";
    return 0;
}