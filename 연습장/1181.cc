#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    vector <string> vc;
    
    int N;
    cin >> N;
    
    string str;
    for(int i=0; i<N; i++)
    {
        cin >> str;
        vc.push_back(str);
    }
    
    sort(vc.begin(), vc.end());
    
    for(int i=0; i<N; i++) {
        cout << vc[i] << " ";
    }
}
