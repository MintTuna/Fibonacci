#include<stdio.h>
#include <math.h>
typedef unsigned long long ull; // �ڵ带 ����ϰ� ���� ���� ��ó��  
#define root5 sqrt(5) // ��Ʈ 5 ��ũ�λ�� 
ull fibonacci (ull n);

int main() {
	int n;
	printf("n��° �ڿ����� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("%llu", fibonacci(n));
	return 0;
}

ull fibonacci (ull n) {
	if (n == 0) {
		return 1; // 0��° �Ǻ���ġ �� = 1 
	} else if (n == 1) {
		return 1; // 1��° �Ǻ���ġ �� = 1 
	} else return (1/root5) * (pow((1+root5)/2, n) - pow((1-root5)/2, n)); 
}
