#include <iostream>
using namespace std;
int main() {
    string name;
    int a, w;
    while(1) {
        if(name == "#" && a == 0 && w == 0) break;
        
        cin >> name >> a >> w;
        if(a>17 || w>=80) cout << name << " Senior" << endl;
        else if((a>0 && a<=17) || (w>0 && w<80))cout << name << " Junior" << endl;
    }
}