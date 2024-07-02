#include <iostream>
using namespace std;

int main() {
    float ft = 9.2;
    float mi = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << ft*30.48 << "cm";
    cout << endl << "1.3mi = " << mi*160934 << "cm";
    return 0;
}