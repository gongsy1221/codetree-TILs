#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a % 4 == 0)
    {
        if(a % 100 == 0)
            cout << "false";
        else 
            cout << "true";
    }
    else
    {
        if(a % 100 == 0)
            cout << "true";
        else 
            cout << "false";
    }
    return 0;
}