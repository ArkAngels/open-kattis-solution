#include <stdio.h>

int main(){
	long long int stones;
	while(scanf("%lld", &stones) != EOF){
		if(stones % 2 != 0){
			printf("Alice\n");
		}else{
			printf("Bob\n")	;
		}
	}

	return 0;
}