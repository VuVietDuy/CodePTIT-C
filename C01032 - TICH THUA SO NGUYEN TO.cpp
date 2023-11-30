#include <stdio.h>
#include <math.h>

int cal(int n) {
	int t = 1;
	int i=2;
	for (int i = 2; i <= sqrt(n); i++) {
		if(n%i==0) {
			t = t*i;
		}
		while(n % i ==0) {
			n=n/i;
		}
	}
	t = t*n;
	return t;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", cal(n));
	}
}

