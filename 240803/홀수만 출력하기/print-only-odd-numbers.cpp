#include <iostream>
using namespace std;

int main() {
    int a,i;
    cin >> a;
    while(a--)
    {
        cin >>i;
        if(i % 3 == 0 && i % 2 == 1)
            cout << i << endl; 
    }
    return 0;
}