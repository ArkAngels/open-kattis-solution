#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main(){
	int a, b;
	char tempA[10000];
	char tempB[10000];
	while(scanf("%d %d", &a, &b) != EOF){
		sprintf(tempA, "%d", a);
		sprintf(tempB, "%d", b);
		strrev(tempA);
		strrev(tempB);

		a = atoi(tempA);
		b = atoi(tempB);
		if(a > b)printf("%d\n", a);
		if(b > a)printf("%d\n", b);
	}

	return 0;
}