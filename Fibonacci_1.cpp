// 피보나치수열 일반항 이용
#include<stdio.h>
#include <math.h>
typedef unsigned long long ull; // 코드를 깔끔하게 쓰기 위한 전처리  
#define root5 sqrt(5) // 루트 5 매크로상수 
ull fibonacci (ull n);

int main() {
	int n;
	printf("n번째 자연수를 입력하세요: ");
	scanf("%d", &n);
	printf("%llu", fibonacci(n));
	return 0;
}

ull fibonacci (ull n) {
	if (n == 0) {
		return 1; // 0번째 피보나치 수 = 1 
	} else if (n == 1) {
		return 1; // 1번째 피보나치 수 = 1 
	} else return (1/root5) * (pow((1+root5)/2, n) - pow((1-root5)/2, n)); 
}
