#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    int strlen = 0;
    strlen = str1.length() + str2.length();
    cout << strlen;

    return 0;
}