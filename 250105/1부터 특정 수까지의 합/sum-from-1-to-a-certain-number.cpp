#include <iostream>

using namespace std;

int N;

int sum(int n){
    int sum = 0;
    for(int i = 0 ; i <= n ; i++){
        sum+=i;
    }

    return sum/10;
} 


int main() {
    cin >> N;

    cout << sum(N);

    return 0;
}