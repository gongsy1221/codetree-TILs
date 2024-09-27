#include <iostream>
using namespace std;

int main() {
    int a, cnt =0;
    cin >> a;
    for(int i =1; i <= 100; i++)
    {
        cnt += i;
        if(cnt >= a)
        {
            cout << i;
            break;
        }
    }
    return 0;
}