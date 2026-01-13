#include <iostream>
using namespace std;
int main() {
    string a,b,c,d,e;
    cin >> a; cin >> b; cin >> c; cin >> d; cin >> e;
    int flag=0;
    for(int i=0; i<a.length()-2; i++) {
        if(a[i] == 'F') {
            if(a[i+1] == 'B') {
                if(a[i+2] == 'I') {
                    cout << "1 ";
                    flag++;
                }
            }
        }
    }
    for(int i=0; i<b.length()-2; i++) {
        if(b[i] == 'F') {
            if(b[i+1] == 'B') {
                if(b[i+2] == 'I') {
                    cout << "2 ";
                    flag++;
                }
            }
        }
    }
    for(int i=0; i<c.length()-2; i++) {
        if(c[i] == 'F') {
            if(c[i+1] == 'B') {
                if(c[i+2] == 'I') {
                    cout << "3 ";
                    flag++;
                }
            }
        }
    }
    for(int i=0; i<d.length(); i++) {
        if(d[i] == 'F') {
            if(d[i+1] == 'B') {
                if(d[i+2] == 'I') {
                    cout << "4 ";
                    flag++;
                }
            }
        }
    }
    for(int i=0; i<e.length(); i++) {
        if(e[i] == 'F') {
            if(e[i+1] == 'B') {
                if(e[i+2] == 'I') {
                    cout << "5";
                    flag++;
                }
            }
        }
    }
    if(flag == 0) cout << "HE GOT AWAY!";
}
