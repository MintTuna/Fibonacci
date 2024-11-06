#include<stdio.h>

typedef unsigned long long ull; // �ڵ带 ����ϰ� ���� ���� ��ó��  
ull fibonacci(ull n);

int main() {
	int n = 0;
	printf("n��° �ڿ����� �Է��ϼ���: ");
	scanf("%d", &n);	
	printf("%llu", fibonacci(n));
	return 0;
}

ull fibonacci(ull n) {
	ull fibo[3] = { 0, };
	fibo[0] = 1;
	fibo[1] = 1;
	ull result;
	for (int i=0; i < n; i++) {
		if(i==0) {
			result = fibo[0];
		} else if(i==1) {
			result = fibo[1];
		} else {
			fibo[2] = fibo[0] + fibo[1];
			result = fibo[2];
			fibo[0] = fibo[1];
			fibo[1] = fibo[2];
		}
	}
	return result;
}