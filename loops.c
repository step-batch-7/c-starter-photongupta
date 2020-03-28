#include<stdio.h>

int factorial(int);

int factorial(int num){
  if(num==0){
    return 1;
  }
  return factorial(num-1)*num;
}

int main(void){
  int num;
  printf("Enter a number to get the factorial :");
  scanf("%d",&num);
  printf("factorial of %d is %d",num,factorial(num));
  return 0;
}