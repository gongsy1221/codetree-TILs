#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;
    int t1, t2, t3;
    
    cin >> c1 >> t1;
    cin >> c2 >> t2;
    cin >> c3 >> t3;
    
    if(c1 == 'Y' && t1 >= 37) 
    {
        if((c2 == 'Y' && t2 >= 37) || (c3 == 'Y' && t3 >= 37))
            cout << "E";
        else
            cout << "N";
    }
    else 
    {
        if((c2 == 'Y' && t2 >= 37) && (c3 == 'Y' && t3 >= 37))
            cout << "E";
        else
            cout << "N";
    }
    return 0;
}