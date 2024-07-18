#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if(a >= 1 && b >= 1)
        cout << "High";
    else if(a >= 0.5f && b >= 0.5f)
        cout<< "Middle";
    else
        cout << "Low";
    return 0;
}