#include <iostream>
using namespace std;

int main() {
    int a,i;
    cin >> a;
    while(a--)
    {
        cin >>i;
        if(i % 3 == 0)
            cout << i << endl; 
    }
    return 0;
}