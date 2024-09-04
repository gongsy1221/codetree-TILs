#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =1; i <=a; i++)
    {
        for(int j = 9 + 2*i; j < (9 + 2*i)+2*a; j += 2)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}