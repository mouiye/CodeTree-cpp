#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    string s;
    int count;
    int n;

    cin >> count;

    int i = 0;
    for(i = 0 ; i < count ; i++){
        cin >> s;
        if(s == "push_back"){
            cin >> n;
            l.push_back(n);
        } else if(s == "push_front"){
            cin >> n;
            l.push_front(n);
        } else if(s == "pop_front"){
            cout << l.front() << endl;
            l.pop_front();
        } else if(s == "pop_back"){
            cout << l.back() << endl;
            l.pop_back();
        } else if(s == "size"){
            cout << l.size() << endl;
        } else if(s == "empty"){
            if(l.size() == 0){
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else if(s == "front"){
            cout << l.front() << endl;
        } else if(s == "back") {
            cout << l.back() << endl;
        }
    }

    return 0;
}