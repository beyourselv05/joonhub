#include <iostream>

using namespace std;

int main() {
    int l;
    string str;
    long long int sum=0;
    long long int m=1234567891;
    long long int r=1;
    
    cin >> l;
    cin >> str;
    
    for(int i=0; i<l; i++) {
        sum += ((str[i]-96)*r)%m;
        r = (r*31)%m;
    }
    sum = sum%m;
    cout << sum;
}