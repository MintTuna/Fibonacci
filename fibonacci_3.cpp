#include<stdio.h>
#include <math.h>
typedef unsigned long long ull; // �ڵ带 ����ϰ� ���� ���� ��ó��  

ull fibonacci (ull n);

int main() {
	int n;
	ull result;
	printf("n��° �ڿ����� �Է��ϼ���: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		result = fibonacci(n);
	}
	printf("%llu", result);
	return 0;
}

ull fibonacci (ull n) {
	if(n == 0) return 0;
	else if(n== 1) return 1;
	
	return fibonacci(n-1) + fibonacci(n-2);
}
