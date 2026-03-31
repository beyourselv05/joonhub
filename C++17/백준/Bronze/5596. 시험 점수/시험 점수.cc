#include <iostream>
using namespace std;
int main() {
    int s1[4];  int s2[4];
    int s1_r=0; int s2_r=0;
    for(int i=0; i<4; i++) {
        cin >> s1[i];
        s1_r += s1[i];
    }
    for(int i=0; i<4; i++) {
        cin >> s2[i];
        s2_r += s2[i];
    }
    if(s1_r >= s2_r) cout << s1_r;
    if(s1_r < s2_r) cout << s2_r;
}