#include <stdio.h>

int modPow(int base, int exp){
	if(exp < 0) return -1;
	int result = 1;
	while(exp){
		if(exp & 1) result *= base;
		exp >>= 1;
		base *= base;
	}
	return result;
}

int main(){
	int n;
	int answer = 0;
	while(scanf("%d", &n) != EOF){
		answer = modPow(modPow(2, n) + 1, 2);
		printf("%d\n", answer);
	}
	return 0;
}