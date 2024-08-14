#include <iostream>
using namespace std;

int main() {
    int n, sum =0;
    cin >> n;

    for(int j = 1; j < n; j++)
    {
        if(i%j==0)
            sum += j;
    }

    if(sum == n)
        cout << 'P';
    else
        cout << 'N';
    return 0;
}