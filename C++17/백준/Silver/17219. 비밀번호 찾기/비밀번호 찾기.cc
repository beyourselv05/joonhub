#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;
    string A, B;
    
    map <string, string> m;
    
    for(int i=0; i<N; i++) {
        cin >> A >> B;
        m[A] = B;
    }
    
    for(int i=0; i<M; i++) {
        cin >> A;
        cout << m[A] << '\n';
    }
}