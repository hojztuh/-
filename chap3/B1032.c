#include <stdio.h>
#define nMAX 100010

int main() {
	int school[nMAX] = { 0 };
	int n, schID, score, k, MAX;
	
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d%d",&schID,&score);
        /*
		if ((school[schID] += score) > school[k] ) {
			k = schID;
		}
        */
        school[schID] += score;
	}
    k = 1;
    MAX = -1;
    for (int i = 1; i <= n; i++) {
        if (school[i] > MAX)
        {
            k = i;
            MAX = school[i];
        }
    }
	
	printf("%d %d\n",k, MAX);
	return 0;
}