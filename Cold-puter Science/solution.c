#include <stdio.h>

int main(){
  int n, temp;
  while(scanf("%d", &n) != EOF){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
      scanf("%d", &temp);
      if(temp < 0){
        count++;
      }
    }
    printf("%d", count);
  }

  return 0;
}
