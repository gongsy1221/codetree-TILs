#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    if(a >= 1)
        cout << "High";
    else if(a >= 0.5f)
        cout << "Middle";
    else
        cout << "Low";
    return 0;
}