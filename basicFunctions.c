#include<stdio.h>

int isEven(int);

int isEven(int num){
  return num %2==0;
}

int main(void){
  int num;
  printf("Enter a number to check whether the number is even or not: ");
  scanf("%d",&num);
  printf("%s",isEven(num)?"even":"not even");
}