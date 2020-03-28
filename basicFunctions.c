#include<stdio.h>

int isEven(int);
int isOdd(int);
int square(int);
int cube(int);

int isEven(int num){
  return num %2==0;
}

int isOdd(int num){
  return !isEven(num);
}

int square(int num){
  return num*num;
}

int cube(int num){
  return square(num)*num;
}

int main(void){
  
  int num1;
  printf("Enter a number to check whether the number is even or not: ");
  scanf("%d",&num1);
  printf("%s \n",isEven(num1)?"even":"not even");

  int num2;
  printf("Enter a number to check whether the number is odd or not: ");
  scanf("%d",&num2);
  printf("%s \n",isOdd(num2)?"odd":"not odd");

  int num3;
  printf("Enter a number to get the square : ");
  scanf("%d",&num3);
  printf("%d \n",square(num3));

  int num4;
  printf("Enter a number to get the cube : ");
  scanf("%d",&num4);
  printf("%d \n",cube(num4));
  
}