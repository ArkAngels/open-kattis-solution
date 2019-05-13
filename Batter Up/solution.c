#include <stdio.h>

int main(){
  int n, angka, counter = 0;
  double result = 0.0;
  scanf("%d", &n);
  for(int i = 0 ; i < n ; i++){
    scanf("%d", &angka);
    if(angka < 0) continue;
    result = result + (float) angka;
    counter++;
  }
  printf("%.10f\n", result / counter) ;

  return 0;
}
