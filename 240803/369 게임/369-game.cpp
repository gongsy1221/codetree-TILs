#include <iostream>
using namespace std;

int main() {
    int n,i =1;
    cin >> n;
    while(i <= n)
    {
        if(i % 3 == 0)
			cout << "0 ";
		else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			cout << "0 ";
		else if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
			cout << "0 ";
        else
            cout << i << ' ';
        i++;
    }
    return 0;
}