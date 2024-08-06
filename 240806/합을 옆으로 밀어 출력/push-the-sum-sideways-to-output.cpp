#include <iostream>
using namespace std;
int arr[6];
int main() {
    int n, a, sum = 0, b =0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }

    while (sum >= 10)
    {
        arr[b] = sum % 10;
        sum /= 10;
        b++;
    }
    arr[b] = sum;

    for (int i = b-1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << arr[b];
}