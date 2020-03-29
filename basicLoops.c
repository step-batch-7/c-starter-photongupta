
#include<stdio.h>

int factorial(int);
void printFibonacciSeries(int);
void printOddSeries(int);
void printEvenSeries(int);
void printMultiplicationTable(int,int);
int getSumOfN(int,int);
int getProductOfN(int,int);
void printOddNumInRange(int,int);
void printNthNumber(int,int,int);
int sumOfEvenInRange(int,int);
void printReverseOddSeries(int);


int factorial(int num){
  if(num==0){
    return 1;
  }
  return factorial(num-1)*num;
}

void printFibonacciSeries(int term){
  int lastTerm = 0;
  int nextTerm=1;
  for (int i = 1; i <= term; i++){
    printf("%d \n",lastTerm);
    nextTerm = nextTerm + lastTerm;
    lastTerm = nextTerm-lastTerm;
  }
}

void printOddSeries(int limit){
  for (int odd = 1; odd <= limit; odd+=2){
   printf("%d \n",odd);
  }
}

void printEvenSeries(int limit){
  for (int even = 0; even <= limit; even+=2){
   printf("%d \n",even);
  }
}

void printMultiplicationSeries(int multiplier,int multiplicandLimit){
  for (int multiplicand = 1; multiplicand <= multiplicandLimit; multiplicand+=1){
   printf("%d \n",multiplier*multiplicand);
  }
}

int sumOfN(int start,int end){
  int sum=0;
  for(int num=start;num<=end;num++){
    sum+=num;
  }
  return sum;
}

int productOfN(int start,int end){
  int product=1;
  for(int num=start;num<=end;num++){
    product=product*num;
  }
  return product;
}

void printOddNumInRange(int start,int end){
  int odd = start%2 ? start : start+1;
  for(;odd<=end;odd+=2){
    printf("%d \n",odd);
  }
}

void printNthNumber(int start,int end,int n){
  for(int num=start;num<=end;num+=n){
    printf("%d \n",num);
  }
}

int sumOfEvenInRange(int start,int end){
  int even = start%2 ? start+1 : start;
  int sum=0;
  for(;even<=end;even+=2){
    sum+=even;
  }
  return sum;
}

void printReverseOddSeries(int limit){
  int odd = limit%2 ? limit : limit-1;
  for (; odd > 0; odd-=2){
   printf("%d \n",odd);
  }
}

int main(void){

  int num;
  printf("Enter a number to get the factorial :");
  scanf("%d",&num);
  printf("factorial of %d is %d\n",num,factorial(num));

  int num1;
  printf("Enter a term to get the fibonacci series :");
  scanf("%d",&num1);
  printFibonacciSeries(num1);

  int limit1;
  printf("Enter a limit to get the odd number series :");
  scanf("%d",&limit1);
  printOddSeries(limit1);

  int limit2;
  printf("Enter a limit to get the even number series :");
  scanf("%d",&limit2);
  printEvenSeries(limit2);

  int multiplier,multiplicandLimit;
  printf("Enter multiplier and multiplicandLimit to get multiplication table :");
  scanf("%d %d",&multiplier,&multiplicandLimit);
  printMultiplicationSeries(multiplier,multiplicandLimit);

  int num2,num3;
  printf("Enter two numbers to get the sum of all the numbers between those:");
  scanf("%d %d",&num2,&num3);
  printf("Sum of all the numbers between %d and %d is %d\n",num2,num3,sumOfN(num2,num3));

  int num4,num5;
  printf("Enter two numbers to get the product of all the numbers between those:");
  scanf("%d %d",&num4,&num5);
  printf("Product of all the numbers between %d and %d is %d\n",num4,num5,productOfN(num4,num5));

  int num6,num7;
  printf("Enter two numbers to get all odd numbers between those:");
  scanf("%d %d",&num6,&num7);
  printOddNumInRange(num6,num7);

  int num8,num9;
  printf("Enter two numbers to get the sum of all the even numbers between those:");
  scanf("%d %d",&num8,&num9);
  printf("Sum of all the even numbers between %d and %d is %d\n",num8,num9,sumOfEvenInRange(num8,num9));

  int limit3;
  printf("Enter a limit to get the reverse odd number series :");
  scanf("%d",&limit3);
  printReverseOddSeries(limit3);

  int start,end,num10;
  printf("Enter range and nth number to get all the nth numbers in the range :");
  scanf("%d %d %d",&start,&end,&num10);
  printNthNumber(start,end,num10);

  return 0;
}