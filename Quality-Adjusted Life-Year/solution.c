#include <stdio.h>

int main(){
	int n;
	float quality;
	float years;
	float qaly = 0;

	while(scanf("%d", &n) != EOF){
		for(int i = 0 ; i < n ; i++){
			scanf("%f %f", &quality, &years);
			qaly += quality * years;
		}
		printf("%.3f\n", qaly);
	}
	return 0;
}