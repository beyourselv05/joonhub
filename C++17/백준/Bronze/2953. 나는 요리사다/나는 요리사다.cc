#include <iostream>
using namespace std;
int main() {
    int line, cnt=1, sum=0;

    for(int i=0; i<5; i++) {
        int cmp = 0;
        for(int j=0; j<4; j++) {
            int value=0;
            cin >> value;
            cmp += value;
        }
        if(sum < cmp) {
            sum = cmp;
            line = i+1;
        }
    }
    cout << line << " " << sum;
}