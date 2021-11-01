#include <stdio.h>

int main(int argc, char *argv[]) {
	int row, col, n;
	char c;
	
	scanf("%d %c",&n,&c);
	
	col = n;
	row = n / 2;
	if (n % 2) {
		row++;
	}
	
	for (int i = 0; i < col; i++) {
		printf("%c",c);
	}
	
	printf("\n");
	
	for (int i = 2; i < row; i++) {
		printf("%c",c);
		for (int j = 0; j < col - 2; j++) {
			printf(" ");
		}
		printf("%c\n",c);
	}
	
	for (int i = 0; i < col; i++) {
		printf("%c",c);
	}

	return 0;
}