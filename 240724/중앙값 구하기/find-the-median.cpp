#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>> a>> b>>c;
    if(a >= b)
    {
        if(b <= c)
            cout << c;
        else
            cout << b;
    }
    else
    {
        if(a >= c)
            cout << a;
        else
            cout << c;
    }
    return 0;
}