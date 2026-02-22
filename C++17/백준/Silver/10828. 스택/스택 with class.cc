#include <iostream>
#include <stack>

using namespace std;

class stackSuite {
private:
    stack <int> st;
    
public:   
    int value;
    void push() {
        st.push(value);
    }
    
    void pop() {
        if(st.empty() == 1) cout << -1 << endl;
        else {
            cout << st.top() << endl;
            st.pop();
        }
    }
    
    void size() {
        cout << st.size() << endl;
    }
    
    void empty() {
        cout << (st.empty() ? 1 : 0) << endl;
    }
    
    void top() {
        cout << (st.empty() ? -1 : st.top()) << endl;
    }
};

int main() {
    int n;
    string cmd;
    cin >> n;
    
    stackSuite ss;
    
    for(int i=0; i<n; i++) {
        cin >> cmd;
        
        if(cmd == "push") {
            cin >> ss.value;
            ss.push();
        }
        else if(cmd == "pop") ss.pop();
        else if(cmd == "size") ss.size();
        else if(cmd == "empty") ss.empty();
        else if(cmd == "top") ss.top();
    }
}
