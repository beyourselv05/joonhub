#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int i=0;
    while(i<2) {
        if(a > b) swap(a, b);
        if(b > c) swap(b, c);
        i++;
    }
    cout << b;
}
