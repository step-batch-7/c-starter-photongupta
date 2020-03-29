
#include<stdio.h>

int factorial(int);
void printFibonacciSeries(int);
void printOddSeries(int);
void printEvenSeries(int);
void printMultiplicationTable(int,int);
int getSumOfN(int,int);
int getProductOfN(int,int);
void printOddNumInRange(int,int);


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
  for (int i = 1; i <= limit; i+=2){
   printf("%d \n",i);
  }
}

void printEvenSeries(int limit){
  for (int i = 0; i <= limit; i+=2){
   printf("%d \n",i);
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

  int start,end;
   printf("Enter two numbers to get all odd numbers between those:");
   scanf("%d %d",&start,&end);
   printOddNumInRange(start,end);

  return 0;
}