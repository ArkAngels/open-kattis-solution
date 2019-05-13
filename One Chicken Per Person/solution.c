#include <stdio.h>

int main(){
  int person, chicken, temp = 0;
  scanf("%d%d", &person, &chicken);
  if(person < chicken){
    temp = chicken - person;
    if(temp == 1){
      printf("Dr. Chaz will have 1 piece of chicken left over!");
    }else{
      printf("Dr. Chaz will have %d pieces of chicken left over!", temp);
    }
  }else{
    temp = person - chicken;
    if(temp == 1){
      printf("Dr. Chaz needs 1 more piece of chicken!");
    }else{
      printf("Dr. Chaz needs %d more pieces of chicken!", temp);
    }
  }

  return 0;
}
