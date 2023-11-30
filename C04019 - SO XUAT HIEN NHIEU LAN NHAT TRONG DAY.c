#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[101];
		int dd[30000] = {0};
		int count = 0;
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			dd[a[i]]++;
			if(dd[a[i]]>count) {
				count = dd[a[i]];
			}
		}
		for(int i=0; i<n; i++) {
			if(dd[a[i]] == count) {
				printf("%d ", a[i]);
				dd[a[i]]=0;
			}
		}
		printf("\n");
	}
}

