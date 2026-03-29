#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

void functionFizzbuzz(int a) {
    if(a%3 == 0 && a%5 == 0) {
        cout << "FizzBuzz";
    }
    else if(a%3 == 0) {
        cout << "Fizz";
    }
    else if(a%5 == 0) {
        cout << "Buzz";
    }
    else cout << a;
}

int main() {
    vector <string> vc(3);
    int result=0;
    
    for(int i=0; i<3; i++) {
        cin >> vc[i];
    }
    
    for(int i=0; i<3; i++) {
        if(isdigit((vc[i])[0])) { 
            int o = stoi(vc[i]);    
            result = o+(3-i);
        }
    }
    functionFizzbuzz(result);
}
