#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a, b, c, d;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 'a')
            c.push_back(a[i]);
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] < 'a')
            d.push_back(b[i]);
    }
    int n = stoi(c) + stoi(d);
    cout << n;
    return 0;
}