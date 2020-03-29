
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
  int limit;
  int start,end;

  printf("Enter a number to get the factorial :");
  scanf("%d",&num);
  printf("factorial of %d is %d\n",num,factorial(num));

  printf("Enter a term to get the fibonacci series :");
  scanf("%d",&num);
  printFibonacciSeries(num);

  printf("Enter a limit to get the odd number series :");
  scanf("%d",&limit);
  printOddSeries(limit);

  printf("Enter a limit to get the even number series :");
  scanf("%d",&limit);
  printEvenSeries(limit);

  printf("Enter multiplicand and multipierLimit to get multiplication table :");
  scanf("%d %d",&num,&limit);
  printMultiplicationSeries(num,limit);

  printf("Enter two numbers to get the sum of all the numbers between those:");
  scanf("%d %d",&start,&end);
  printf("Sum of all the numbers between %d and %d is %d\n",start,end,sumOfN(start,end));

  printf("Enter two numbers to get the product of all the numbers between those:");
  scanf("%d %d",&start,&end);
  printf("Product of all the numbers between %d and %d is %d\n",start,end,productOfN(start,end));

  printf("Enter two numbers to get all odd numbers between those:");
  scanf("%d %d",&start,&end);
  printOddNumInRange(start,end);

  printf("Enter range and nth number to get all the nth numbers in the range :");
  scanf("%d %d %d",&start,&end,&num);
  printNthNumber(start,end,num);

  printf("Enter two numbers to get the sum of all the even numbers between those:");
  scanf("%d %d",&start,&end);
  printf("Sum of all the even numbers between %d and %d is %d\n",start,end,sumOfEvenInRange(start,end));

  printf("Enter a limit to get the reverse odd number series :");
  scanf("%d",&limit);
  printReverseOddSeries(limit);
  
  return 0;
}