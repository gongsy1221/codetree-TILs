#include <iostream>
using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;
    for(int i = 1; i <= 10; i++)
    {
        sum *= i;
        if(sum >= n)
        {
            cout << i;
            break;
        }
    }
    return 0;
}