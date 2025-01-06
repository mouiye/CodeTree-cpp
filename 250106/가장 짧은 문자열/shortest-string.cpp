#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    string second;
    string third;


    cin >> first >> second >> third;

    int a;
    int b;
    int c;

    a = first.length();
    b = second.length();
    c = third.length();

    int max = 0;
    int min = 20;

    max = max(a,b);
    max = max(max, c);
    min = min(a,b);
    min = min(min, c);

    cout << max - min;
    return 0;
}