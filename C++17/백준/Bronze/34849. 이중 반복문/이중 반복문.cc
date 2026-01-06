#include <iostream>
using namespace std;
int main() {
    long long int a;
    cin >> a;
    if(a*a <= 100000000){
        cout << "Accepted";
    }
    else if (a*a > 100000000) {
        cout << "Time limit exceeded";
    }
}