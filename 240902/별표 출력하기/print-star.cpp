#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) 
    { 
	    for (int j = 1; j <= i; j++) 
        {
		    cout << "* ";
	    }
	    cout << endl;
    }

    for (int i = a-1; i >0 ; i--) 
    { 
	    for (int j = 0; j < i; j++) 
        {
		    cout << "* ";
	    }
	    cout << endl;
    }
    return 0;
}