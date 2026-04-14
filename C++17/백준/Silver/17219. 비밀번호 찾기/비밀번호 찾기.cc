#include <iostream>
#include <map>

using namespace std;

int main() {
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