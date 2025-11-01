//eof의 개념을 알아야 함. ctrl+z를 누르고 엔터시 프로그램이 종료됨.

#include <stdio.h>

int main() {

	char c;

	while(scanf("%c", &c) != EOF) {
		printf("%c", c);
	}

	return 0;
}