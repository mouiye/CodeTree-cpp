#include <iostream>
using namespace std;

int main() {
    int w;

    cin >> w;

    if(w < 0) { 
        cout << "ice";
    } 
    else if(w >= 100) {
        cout << "vapor";
    }
    else {
        cout << "water";
    }
    
    return 0;
}