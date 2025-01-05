#include <iostream>

using namespace std;

int n, m;

void change(int* a, int* b) {
    int temp = *a; // a가 가리키는 값 저장
    *a = *b;       // a가 가리키는 값을 b가 가리키는 값으로 변경
    *b = temp;     // b가 가리키는 값을 temp로 변경
}

int main() {
    cin >> n >> m;
    int* a = &n; // n의 주소
    int* b = &m; // m의 주소

    change(a, b); // 포인터를 함수로 전달

    cout << n << " " << m; // 바뀐 값 출력

    return 0;
}
