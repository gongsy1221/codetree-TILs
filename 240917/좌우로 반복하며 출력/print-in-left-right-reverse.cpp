#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
		if (i % 2 == 0) {
			for (int j = 1; j <= a; j++) {
				cout << j;
			}
		}
		else {
			for (int j = a; j >= 1; j--) {
				cout << j;
			}
		}
		cout << endl;
	}
    return 0;
}