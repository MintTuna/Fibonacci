//행렬제곱 이용 피보나치 알고리즘
#include <stdio.h>
#include <string.h>

long long arr[2][2];
long long original[2][2];
long long temp1[2][2];

int N = 2;
long long B;
int i, j, m;

void pow_(long long k) {
    
    if(k <= 1) {
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++)
                arr[i][j] %= 1000000007LL;
        }
        return;
    }
    
    pow_(k / 2);
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++)
            temp1[i][j] = arr[i][j];
    }
    
    memset(arr, 0, sizeof(arr));
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            for(m = 0; m < N; m++)
                arr[i][j] = (arr[i][j] + (temp1[i][m] * temp1[m][j])) % 1000000007LL;
        }
    }
    
    if(k % 2) {
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++)
                temp1[i][j] = arr[i][j];
        }
        memset(arr, 0, sizeof(arr));
        
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                for(m = 0; m < N; m++)
                    arr[i][j] = (arr[i][j] + (temp1[i][m] * original[m][j])) % 1000000007LL;
            }
        } 
    }   
}

int main() {
    
    scanf("%lld", &B);
    
    
    arr[0][0] = original[0][0] = 1LL;
    arr[0][1] = original[0][1] = 1LL;
    arr[1][0] = original[1][0] = 1LL;
    arr[1][1] = original[1][1] = 0LL;
    
    pow_(B - 1);
    printf("%lld", (B==0)?0:arr[0][0]);
}
