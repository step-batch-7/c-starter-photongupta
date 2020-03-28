#include<stdio.h>
#include<math.h>

int isEven(int);
int isOdd(int);
long int square(int);
long int cube(int);
int gcd(int,int);
int lcm(int,int);
double getSI(double,double,double);
double getCI(double,double,double);
double convertToFahrenheit(double);
double convertToCentigrade(double);
int getGreaterOfTwo(int,int);
int greatestOfThree(int,int,int);
double average(int,int,int);


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

double getCI(double principleAmount,double rate,double time){
  return principleAmount*pow((1+rate/100),time);
}

double convertToFahrenheit(double tempInCentigrade){
  return (tempInCentigrade*9/5)+32;
}

double convertToCentigrade(double tempInfahrenheit){
  return (tempInfahrenheit-32)*5/9;
}

int getGreaterNum(int num1,int num2){
  if(num1>num2){
    return num1;
  }
  return num2;
}

int greatestOfThree(int num1,int num2,int num3){
  int greaterOfTwo = getGreaterNum(num1,num2);
  return getGreaterNum(greaterOfTwo,num3);
}

double average(int num1,int num2,int num3){
  return (num1+num2+num3)/3;
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

  double principleAmount2,rate2,time2;
  printf("Enter principleAmount, rate and time in order to get the compound interest :");
  scanf("%lf %lf %lf",&principleAmount2,&rate2,&time2);
  printf("CI on %lf for %lf year at the rate of %lf percent is %lf",principleAmount2,time2,rate2,getCI(principleAmount2,rate2,time2));

  double tempInCentigrade;
  printf("Enter the temperature in centigrade : ");
  scanf("%lf",&tempInCentigrade);
  printf("Temperature in fahrenheit is %lf \n",convertToFahrenheit(tempInCentigrade));

  double tempInFahrenheit;
  printf("Enter the temperature in Fahrenheit : ");
  scanf("%lf",&tempInFahrenheit);
  printf("Temperature in centigrade is %lf \n",convertToCentigrade(tempInFahrenheit));

  int num9,num10,num11;
  printf("Enter 3 numbers to get the highest number : ");
  scanf("%d %d %d",&num9,&num10,&num11);
  printf("Greatest number is %d \n",greatestOfThree(num9,num10,num11));

  int num12,num13,num14;
  printf("Enter 3 numbers to get the average : ");
  scanf("%d %d %d",&num12,&num13,&num14);
  printf("Average of %d, %d and %d is %lf \n",num12,num13,num14,average(num12,num13,num14));

}