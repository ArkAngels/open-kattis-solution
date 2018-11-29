#include <stdio.h>

int main(){
	int s;
	int r1;
	int r2 = 0;

	//rumus: s = (r1+r2)/2
	//r2 = 2s
	while(scanf("%d %d", &r1, &s) != EOF){
		r2 = (2*s) - r1;
		printf("%d\n", r2);
	}

	return 0;
}