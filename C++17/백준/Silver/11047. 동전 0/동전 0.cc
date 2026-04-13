#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K, cnt=0;
    cin >> N >> K;
    
    vector <int> vc(N);
    
    for(int i=0; i<N; i++) {
        cin >> vc[i];
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
}