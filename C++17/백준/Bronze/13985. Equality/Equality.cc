#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[5]; // 5개면 충분합니다.
    for(int i = 0; i < 5; i++) {
        cin >> s[i];
    }
    
    if(stoi(s[0]) + stoi(s[2]) == stoi(s[4])) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}