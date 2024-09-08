#include <iostream>
using namespace std;

int main() {
    int a, cnt=1;
    cin >> a;
    for(int i= 0; i < a; i++)
    {
        for(int j =0; j < a; j++)
        {
            if(cnt > 9)
                cnt = 1;
            cout << cnt++;
        }
            
        cout << endl;
    }
    return 0;
}