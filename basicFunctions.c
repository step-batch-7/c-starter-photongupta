#include<stdio.h>

int isEven(int);
int isOdd(int);
long int square(int);
long int cube(int);
int gcd(int,int);
int lcm(int,int);
double getSI(double,double,double);

int isEven(int num){
  return num %2==0;
}

int isOdd(int num){
  return !isEven(num);
}

long square(int num){
  return num*num;
}

long cube(int num){
  return square(num)*num;
}

int gcd(int num1,int num2){
  for(int factor = num1; factor>1; factor--){
    if((num1%factor==0) && (num2%factor==0)){
      return factor;
    }
  }
  return 1;
}

int lcm(int num1,int num2){
  return (num1*num2)/gcd(num1,num2);
}

double getSI(double principleAmount,double rate,double time){
  return (principleAmount*rate*time)/100;
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
  printf("Square of %d is %ld \n",num3,square(num3));

  int num4;
  printf("Enter a number to get the cube : ");
  scanf("%d",&num4);
  printf("Cube of %d is %ld \n",num4,cube(num4));

  int num5,num6;
  printf("Enter two numbers to get the gcd : ");
  scanf("%d %d",&num5,&num6);
  printf("GCD of %d and %d is %d \n",num5,num6,gcd(num5,num6));

  int num7,num8;
  printf("Enter two numbers to get the lcm : ");
  scanf("%d %d",&num7,&num8);
  printf("LCM of %d and %d is %d \n",num7,num8,lcm(num7,num8));

  double principleAmount1,rate1,time1;
  printf("Enter principleAmount, rate and time in order to get the simple interest :");
  scanf("%lf %lf %lf",&principleAmount1,&rate1,&time1);
  printf("SI on %lf for %lf year at the rate of %lf percent is %lf",principleAmount1,time1,rate1,getSI(principleAmount1,rate1,time1));
  
}