#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    int cnt = 0;
    cout << fixed;
    cout.precision(1);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cnt += arr[i][j];
        }
        cout << (float)cnt / 4 << ' ';
        cnt=0;
    }
    cout << endl;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cnt += arr[j][i];
        }
        cout << (float)cnt / 2 << ' ';
        cnt=0;
    }
    cout << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cnt += arr[i][j];
        }
    }
    cout << (float)cnt / 8 << endl;

    return 0;
}