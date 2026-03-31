#include <iostream>

using namespace std;
int main() {
    int x1=0, x2=0, x3=0;
    int y1=0, y2=0, y3=0;
    int r_x=0, r_y=0;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    if(x1 == x2) r_x = x3;
    if(x2 == x3) r_x = x1;
    if(x1 == x3) r_x = x2;
    
    if(y1 == y2) r_y = y3;
    if(y2 == y3) r_y = y1;
    if(y1 == y3) r_y = y2;
    
    cout << r_x << " " << r_y;
}