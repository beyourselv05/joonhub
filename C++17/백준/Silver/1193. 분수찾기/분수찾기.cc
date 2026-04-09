#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int line=1;

    while(n > line) {
        n -= line;
        line++;
    }

    if(line % 2 == 1) {
        cout << line+1-n << "/" << n; 
    }
    else cout << n << "/" << line+1-n;
}