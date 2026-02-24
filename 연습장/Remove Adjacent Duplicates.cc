#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string str, result_str;
    cin >> n;
    
    stack <char> st;
    
    for(int i=0; i<n; i++) {
        cin >> str;
        
        //범위 기반 for문
        for(char c : str) {     //str안에 있는 문자들을 꺼내서 C에 담기반복
            if(st.empty() == 0 && st.top() == c) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        
        while(st.empty() == 0) {
            result_str += st.top();
            st.pop();
        }
        
        reverse(result_str.begin(), result_str.end());
        
        cout << result_str;
    }
}

