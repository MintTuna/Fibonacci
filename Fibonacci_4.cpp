#include<stdio.h>

typedef unsigned long long ull; // �ڵ带 ����ϰ� ���� ���� ��ó��   
ull fibonacci (ull n);

int memo[100] = { 0, }; // �޸𸮶���¡ �迭  

int main() {
	int n;
	printf("n��° �ڿ����� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("%llu", fibonacci(n-1));
}

ull fibonacci (ull n) {
	if (n == 0) {
	 	return 1;
	} else if (n == 1) {
	 	return 1;
	} 
	 
	if (memo[n] != 0) {
	 	return memo[n]; // ���� memo�� �ִٸ� �� ���� ���  
	} else {
		memo[n] = fibonacci(n-1) + fibonacci(n-2); // ���� memo�� ���ٸ� 
		return memo[n];
	}
}
