#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string name;
    
    set <string> str;
    vector <string> result;
    
    for(int i=0; i<N; i++) {
        cin >> name;
        str.insert(name);
    }
    
    for(int i=0; i<M; i++) {
        cin >> name;
        if(str.find(name) != str.end()) {
            result.push_back(name);
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << '\n';
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << '\n';
    }
}
