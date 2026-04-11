#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	int sum=0;
	int temp=0;

	for(int i=1; i<=13; i++) {
		if(i%2 == 1) {
			if(str[i-1] == '*') {
				temp = 1;   //asterisk -> odd num
				continue;
			}
			sum += str[i-1] - '0';
		}
		else if(i%2 == 0) {
			if(str[i-1] == '*') {
				temp = -1;  //asterisk -> even num
				continue;
			}
			sum += 3*(str[i-1] - '0');
		}
	}
	
	int i=0;
	if(temp == 1) {
		while((sum + i)%10 != 0) {
			i++;
		}
	}
	else if(temp == -1) {
		while((sum + (3*i))%10 != 0) {
			i++;
		}
	}
	cout << i;
}