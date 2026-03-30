#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    
    for(int i=0; i<tc; i++) {
        int Q, D, N, P;
        int val;
        cin >> val;
        
        Q = val/25;     val %= 25; 
        D = val/10;     val %= 10;
        N = val/5;      val %= 5;
        P = val/1;      val %=1;
        
        cout << Q << " " << D << " " << N << " " << P << '\n';
    }
}