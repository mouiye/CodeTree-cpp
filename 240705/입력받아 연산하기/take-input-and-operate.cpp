#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;

    a += 87;
    b = b % 10;

    cout << a << endl << b;
    return 0;
}