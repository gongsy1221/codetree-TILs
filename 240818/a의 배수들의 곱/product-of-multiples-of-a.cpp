#include <iostream>
using namespace std;

int main() {
    int a,b,c=1;
    cin >> a >> b;
    for(int i = 1; i <= b; i++)
    {
        if(i % a == 0)
            c *= i;
    }
    cout << c;
    return 0;
}