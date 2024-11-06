#include<stdio.h>

typedef unsigned long long ull; // 코드를 깔끔하게 쓰기 위한 전처리   
ull fibonacci (ull n);

int memo[100] = { 0, }; // 메모리라이징 배열  

int main() {
	int n;
	printf("n번째 자연수를 입력하세요: ");
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
	 	return memo[n]; // 값이 memo에 있다면 그 값을 출력  
	} else {
		memo[n] = fibonacci(n-1) + fibonacci(n-2); // 값이 memo에 없다면 
		return memo[n];
	}
}
