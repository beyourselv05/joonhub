#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, value, cnt=0;
    cin >> n;
    
    vector <int> vc;
    
    for(int i=0; i<n; i++) {
        cin >> value;
        vc.push_back(value);
        if(i+1 != vc[i]) cnt++;
    }
    cout << cnt;
}