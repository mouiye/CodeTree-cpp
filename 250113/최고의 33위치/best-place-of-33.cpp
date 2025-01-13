#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int max = 0;
    int sum = 0;
    for(int i = 0 ; i < N-2 ; i++){
        for(int j = 0 ; j < N-2 ; j++){
            
            for(int a = i ; a < i+3 ; a++){
                for(int b = j ; b < j+3 ; b++){
                    sum += grid[a][b];
                }
            }

            if(sum > max){
                max = sum;
            }

            sum = 0;

        }
    }

    cout << max;

    return 0;
}
