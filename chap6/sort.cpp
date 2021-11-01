#include <iostream>
#include <algorithm>

using namespace std;

#if 0
int main(int argc, char *argv[]) { // 对整型数组排序
	int a[6] = { 9, 4, 2, 5, 6, -1};
	
	sort(a, a + 4);
	
	for (int i = 0; i < 6; i++) {
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	sort(a, a + 6);
	
	for (int i = 0; i < 6; i++) {
		printf("%d ",a[i]);
	}
	
	return 0;
}
	
#elif 0

int main(int argc, char *argv[]) { // 对浮点数排序
	double a[] = { 1.4, -2.1, 9};
	sort(a, a + 3);
	
	for (int i = 0; i < 3; i++) {
		printf("%.1f ",a[i]);
	}
	printf("\n");
}

#elif 0

int main(int argc, char *argv[]) { // 对字符数组排序
	char c[] = { 'T', 'W', 'A', 'K' };
	sort(c, c + 4);
	for (int i = 0; i < 4; i++) {
		printf("%c",c[i]);
	}
	printf("\n");
}

#else

// 基本数据类型的比较函数cmp的写法,doulbe类型和char类型同理
bool cmp(int a, int b) {
	return a > b;
}

int main(int argc, char *argv[]) {
	int a[] = { 3, 1, 4, 2};
	sort(a, a + 4, cmp);
	for (int i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}


#endif