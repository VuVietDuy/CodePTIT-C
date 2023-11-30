#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int i=2;
	for (int i = 2; i <= sqrt(n); i++) {
		while(n % i ==0) {
			n=n/i;
			printf("%d", i);
			if (n != 1) {
				printf("x");
			} else {
				return 0;
			}
		}
	}
	printf("%d", n);
}