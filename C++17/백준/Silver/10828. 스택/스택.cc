#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, value;
    cin >> n;
    string command;
    
    stack <int> st;
    
    for(int i=0; i<n; i++) {
        cin >> command;
        
        //push
        if(command == "push") {
            cin >> value;
            st.push(value);
        }
        
        //pop
        if(command == "pop") {
            if(st.empty() == 1) {
                cout << -1 << endl;
            }
            else {
                cout << st.top() << endl;
                st.pop();
            }
        }
        
        //size
        if(command == "size") {
            cout << st.size() << endl;
        }
        
        //empty
        if(command == "empty") {
            if(st.empty() == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        
        //top
        if(command == "top") {
            if(st.empty() == 0) {
                cout << st.top() << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
}