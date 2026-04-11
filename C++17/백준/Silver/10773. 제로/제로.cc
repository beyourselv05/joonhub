#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> st;
    
    int n;
    int sum=0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        
        if(temp == 0) {
            st.pop();
        }
        if(temp != 0) {
            st.push(temp);
        }
    }
    
    while(st.empty() == 0) {
        sum += st.top();
        st.pop();
    }
    cout << sum;
}