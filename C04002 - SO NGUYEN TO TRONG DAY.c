#include <stdio.h>

int e[1000] = {0};

void seive() {
	e[0] = 1;
	e[1] = 1;
	for(int i=2; i<1000; i++) {
		if(e[i] == 0) {
			for(int j=i*i; j<1000; j+=i) {
				e[j] = 1;
			}
		}
	}
}

int main() {
	seive();
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, a[100];
		scanf("%d", &n);
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++) {
			if(e[a[i]] == 0) {
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
}