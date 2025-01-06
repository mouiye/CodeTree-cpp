#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int m = 0;
    int a = 0;
    int b = 0;
    int arr[10][10] = {0};

    cin >> n >> m;


    for(int i = 0 ; i < m ; i++){
        cin >> a >> b;
        arr[a-1][b-1] = a*b;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}