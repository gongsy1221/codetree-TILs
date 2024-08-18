#include <iostream>
using namespace std;

int main() {
    long long a,b, result =1;
    cin >> a >> b;
    result = a;
    for(int i = 1; i <b; i++)
        result *= a;
    cout << result;
    return 0;
}