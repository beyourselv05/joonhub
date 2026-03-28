#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++)
    {
        stack <char> st;
        string str;
        cin >> str;
        
        for(int j=0; j<str.length(); j++)
        {
            if(st.empty())
            {
                st.push(str[j]);
            }
            else if(st.top() == '(' && str[j] == ')')
            {
                st.pop();
            }
            else if(st.top() == '(' && str[j] == '(')
            {
                st.push(str[j]);
            }
        }
        if(st.empty()) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}