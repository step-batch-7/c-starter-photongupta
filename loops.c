#include<stdio.h>

int factorial(int);
int fibo(int);

int factorial(int num){
  if(num==0){
    return 1;
  }
  return factorial(num-1)*num;
}

int fibo(int term){
  int lastTerm = 0;
  int currentTerm = 1;
  int nextTerm;

  for (int i = 1; i <= term; i++){
    printf("%d \n",lastTerm);
    nextTerm = currentTerm + lastTerm;
    lastTerm = currentTerm;
    currentTerm = nextTerm;
  }

  return 0;
}

int main(void){

  int num;
  printf("Enter a number to get the factorial :");
  scanf("%d",&num);
  printf("factorial of %d is %d",num,factorial(num));

   int num;
   printf("Enter a term to get the fibonacci series :");
   scanf("%d",&num);
   fibo(num);

  return 0;
}