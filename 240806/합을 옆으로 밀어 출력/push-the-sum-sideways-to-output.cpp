#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, sum =0;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> a;
        sum += a;
    }

    string c = to_string(sum);
	char b = c.front();
	c.push_back(b);
	c.erase(0, 1);

    cout << c;
    return 0;
}