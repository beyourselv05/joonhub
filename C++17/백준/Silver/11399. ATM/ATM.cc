#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, sum=0;
    cin >> n;
    
    vector <int> vc(n);
    
    for(int i=0; i<n; i++) {
        cin >> vc[i];
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            sum += vc[j];
        }
    }
    cout << sum;
}