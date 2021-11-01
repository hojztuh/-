#include <stdio.h>
#include <string.h>
#define MAX 256

int judge(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) 
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	char str[MAX];
	while (gets(str)) {
		int result = judge(str);
		if (result)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
