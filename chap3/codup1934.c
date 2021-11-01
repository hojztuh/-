#include <stdio.h>
#define MAXN 210

int a[MAXN];

int main(int argc, char *argv[]) {
	int n, x;
	
	while (scanf("%d",&n) != EOF) {
		
		for (int i = 0; i < n; i++) {
			scanf("%d",&a[i]);
		}
		
		scanf("%d",&x);
		
		int k;
		
		for (k = 0; k < n; k++) {
			if (a[k] == x) {
				printf("%d\n",k);
				break;
			}
		}
		
		if (k == n) {
			printf("%d\n",-1);
		}
		
	}
	
	return 0;
}