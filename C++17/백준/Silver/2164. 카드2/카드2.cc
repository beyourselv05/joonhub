#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> qu;
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        qu.push(i);
    }

    while(qu.size() != 1) {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }
    
    cout << qu.front();
}