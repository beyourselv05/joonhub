#include <stdio.h>

int main() {
	int a[9];
	int max;
	int count=0;

	for(int i=0; i<9; i++) {
		scanf("%d", &a[i]);
	}

	max = a[0];

	for(int j=1; j<9; j++) {
		if (a[j] > max) {
			max = a[j];
			count = j;
		}
	}
	printf("%d\n%d", max, count+1);
}