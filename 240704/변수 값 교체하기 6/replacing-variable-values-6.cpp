#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 5;
    int tmp = 0;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << endl << b;
    
    return 0;
}