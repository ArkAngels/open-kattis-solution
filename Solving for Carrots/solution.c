#include <stdio.h>

int main(){
	int contestants;
	int solve;
	char desc[1000];

	scanf("%d %d", &contestants, &solve);
	for(int i = 0 ; i < contestants ; i++){
		scanf("%s", desc);
	}
	printf("%d\n", solve);

	return 0;
}