#include <iostream>
using namespace std;
int main() {
    char arr[10];
    cin >> arr;
    if(arr[0] == 'F') cout << "Foundation";
    else if(arr[0] == 'C') cout << "Claves";
    else if(arr[0] == 'V') cout << "Veritas";
    else if(arr[0] == 'E') cout << "Exploration";
}