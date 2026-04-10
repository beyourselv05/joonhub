#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    int sum=0;
    
    for(int i=1; i<=13; i++) {
        if(str[i-1] != '*') {
            if(i%2==1) {
                sum += str[i-1] - '0';
            }
            else if(i%2==0) {
                sum += 3*(str[i-1] - '0');
            }
        }
    }
    
    int i=1;
    while((sum + i)%10 != 0) {
        i++;
    }
    cout << i;
}
