#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    while(true){
        if(n == 1){
            break;
        }

        if(n%2 == 0){
            n = n / 2;
        } else {
            n = n*3+1;
        }

        count++;
    }
    
    cout << count;

    return 0;
}