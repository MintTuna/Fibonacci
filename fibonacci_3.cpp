//재귀함수 이용 피보나치 알고리즘
#include<stdio.h>
#include <math.h>
typedef unsigned long long ull; // 코드를 깔끔하게 쓰기 위한 전처리  

ull fibonacci (ull n);

int main() {
	int n;
	ull result;
	printf("n번째 자연수를 입력하세요: ");
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
