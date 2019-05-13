#include <stdio.h>

int main(){
  int n, speed, hours, hours2;
  while(scanf("%d", &n) != EOF){
    if(n == -1)break;
    int temp = 0, result = 0;
    for(int i = 0 ; i < n ; i++){
      scanf("%d%d", &speed, &hours);
      if(temp == 0){
        result = result + (hours * speed);
        temp = hours;
      }else{
        hours2 = hours;
        hours = hours - temp;
        result = result + (hours * speed);
        temp = hours2;
      }
    }
    printf("%d miles\n", result);
  }
  return 0;
}
