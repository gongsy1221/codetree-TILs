#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int cnt = 0;
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cnt += arr[i][j];
        }
    }
    cout << cnt;
    return 0;
}