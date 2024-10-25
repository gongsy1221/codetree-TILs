#include <iostream>
using namespace std;

int arr[11][11];
int main() {
    int n, m, x ,y;
    cin >> n >> m;
    for(int i =0; i<m; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
    }
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j<=n; j++)
        {
            if(arr[i][j] == 1)
                cout << i * j << ' ';
            else
                cout << 0 << ' ';
        }
        cout << endl;
    }
    return 0;
}