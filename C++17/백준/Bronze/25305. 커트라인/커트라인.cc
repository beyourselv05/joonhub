#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector <int> sc;
    
    for(int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        sc.push_back(temp);
    }
    
    sort(sc.begin(), sc.end());
    
    cout << sc[N-K];
}