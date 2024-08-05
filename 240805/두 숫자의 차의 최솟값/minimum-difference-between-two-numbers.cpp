#include <iostream>
using namespace std;
int arr[10];
int main() {
    int n, min = 100;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i +1; j < n; j++)
        {
            if(j - i <= min)
                min = j - i;
        }
    }
    cout << min;
    return 0;
}