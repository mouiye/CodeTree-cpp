#include <iostream>

using namespace std;

int n, m;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    cin >> n >> m;

    int divisor = gcd(n, m);

    cout << n * m / divisor;
    


    return 0;
}