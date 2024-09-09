#include <iostream>
using namespace std;

int main() {
    int a, cnt =2;
    cin >> a;
    for(int i= 0; i < a; i++)
    {
        for(int j =0; j < a; j++)
        {
            if(cnt > 8)
                cnt = 2;
            cout << cnt << ' ';
            cnt += 2;
        }
            
        cout << endl;
    }
    return 0;
}