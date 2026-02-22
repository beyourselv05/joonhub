#include <iostream>
#include <queue>

using namespace std;

class queueSuite {
public:
    queue <int> que;
    int value;
    void push() {
        que.push(value);
    }
    
    void pop() {
        if(que.empty() == 1) cout << -1 << endl;
        else {
            cout << que.front() << endl;
            que.pop();
        }
    }
    
    void size() {
        cout << que.size() << endl;
    }
    
    void empty() {
        cout << (que.empty() ? 1 : 0) << endl;
    }
    
    void front() {
        cout << (que.empty() ? -1 : que.front()) << endl;
    }
    
    void back() {
        cout << (que.empty() ? -1 : que.back()) << endl;
    }
};

int main() {
    int n;
    string cmd;
    cin >> n;
    
    queueSuite qs;
    
    for(int i=0; i<n; i++) {
        cin >> cmd;
        
        if(cmd == "push") {
            cin >> qs.value;
            qs.push();
        }
        else if(cmd == "pop") qs.pop();
        else if(cmd == "size") qs.size();
        else if(cmd == "empty") qs.empty();
        else if(cmd == "front") qs.front();
        else if(cmd == "back") qs.back();
    }
}