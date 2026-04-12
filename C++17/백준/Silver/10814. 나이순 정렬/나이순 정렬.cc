#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair <int, string> a, pair <int, string> b) {
    return a.first < b.first;
}

int main() {
    
    int n;
    cin >> n;
    
    pair <int, string> pr;          //declare pair utility     
    vector <pair <int, string>> vc;
    
    for(int i=0; i<n; i++) {
        cin >> pr.first >> pr.second;
        vc.push_back(pr);
    }
    
    stable_sort(vc.begin(), vc.end(), comp);
    
    for(int i=0; i<n; i++)
        cout << vc.at(i).first << ' ' << vc.at(i).second << '\n';
}