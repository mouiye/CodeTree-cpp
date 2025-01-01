#include <iostream>
using namespace std;

int divide(int n){
    int m = 0;
    for(int i = 1 ; i <= n ; i++){
        m = m + i;
    }

    m = m / 10;
    return m;
}

int main() {
    int n;
    cin >> n;
    cout << divide(n);
    return 0;
}