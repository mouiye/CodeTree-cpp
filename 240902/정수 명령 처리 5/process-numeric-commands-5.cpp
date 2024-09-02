#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str1 = "push_back";
    string str2 = "pop_back";
    string str3 = "size";
    string str4 = "get";

    int count;
    string s;
    int n;
    vector<int> v;

    cin >> count;
    int i = 0;
    for(i = 0 ; i < count ; i++){
        cin >> s;
        if(s == str1){
            cin >> n;
            v.push_back(n);
        } else if(s == str2){
            v.pop_back();
        } else if(s == str3){
            cout << v.size() << endl;
        } else if(s == str4){
            cin >> n;
            cout << v[n-1] << endl;
        }
    }

    return 0;
}