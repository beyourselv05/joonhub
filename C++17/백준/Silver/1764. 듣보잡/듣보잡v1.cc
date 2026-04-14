#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    string a, b;
    map <int, string> m1;
    map <int, string> m2;
    vector <string> vc;
    
    for(int i=0; i<N; i++) {
        cin >> a;
        m1[i] = a;
    }
    
    for(int i=0; i<M; i++) {
        cin >> b;
        m2[i] = b;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(m1[i] == m2[j]) {
                vc.push_back(m1[i]);
            }
        }
    }
    
    sort(vc.begin(), vc.end());
    
    cout << vc.size() << '\n';
    for(int i=0; i<vc.size(); i++) {
        cout << vc[i] << '\n';
    }
}
