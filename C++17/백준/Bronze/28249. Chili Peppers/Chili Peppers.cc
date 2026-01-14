#include <iostream>
using namespace std;
struct menu {
    string name;
    int price;
};

int main() {
    struct menu v1 = {"Poblano", 1500};
    struct menu v2 = {"Mirasol", 6000};
    struct menu v3 = {"Serrano", 15500};
    struct menu v4 = {"Cayenne", 40000};
    struct menu v5 = {"Thai", 75000};
    struct menu v6 = {"Habanero", 125000};
    
    int n;
    int sum = 0;
    string input;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> input;
        if(input == v1.name) sum += v1.price;
        if(input == v2.name) sum += v2.price;
        if(input == v3.name) sum += v3.price;
        if(input == v4.name) sum += v4.price;
        if(input == v5.name) sum += v5.price;
        if(input == v6.name) sum += v6.price;
    }
    cout << sum;
}