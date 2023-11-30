#include <stdio.h>

int main() {
	int a[10] = {0};
	int n;
	scanf("%d", &n);
	while(n>0) {
		int tmp = n%10;
		a[tmp] ++;
		n/=10;
	}
	if(a[2]>0) {
		printf("%d %d\n", 2, a[2]);
	}
	if(a[3]>0) {
		printf("%d %d\n", 3, a[3]);
	}
	if(a[5]>0) {
		printf("%d %d\n", 5, a[5]);
	}
	if(a[7]>0) {
		printf("%d %d\n", 7, a[7]);
	}
}