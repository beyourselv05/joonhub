#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    int cnt=0;
    cin >> N >> K;
    
    vector <int> vc;
    
    for(int i=0; i<N; i++) {
        int value;
        cin >> value;
        vc.push_back(value);
    }
    while(K != 0) {
        int jar=0;
        for(int i=0; i<N; i++) {
            if(vc[i] > K) break;
            jar = i;
        }
    
        cnt += K/vc[jar];
        K %= vc[jar];
    }
    
    cout << cnt;
    return 0;
}