#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a+b+c == 180)
    {
        if(a==b && b==c && c==a)
        {
            cout << "Equilateral";
        }
        else if(a==b || b==c || c==a)
        {
            cout << "Isosceles";
        }
        else if(a!=b && b!=c && c!=a)
        {
            cout << "Scalene";
        }
    }
    else
    {
        cout << "Error";
    }
}