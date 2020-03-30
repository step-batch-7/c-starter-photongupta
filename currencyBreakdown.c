#include<stdio.h>

int printNoOfNotes(unsigned long ,int);

int printNoOfNotes(unsigned long amount, int denomination){
  int noOfNotes = amount/denomination;
  printf("%d X Rs %d\n",noOfNotes,denomination);
  return amount%denomination; 
}

int main(void){

  unsigned long amount;
  printf("Enter an amount to break it down in currency :");
  scanf("%lu",&amount);
  amount = printNoOfNotes(amount,2000);
  amount = printNoOfNotes(amount,500);
  amount = printNoOfNotes(amount,200);
  amount = printNoOfNotes(amount,100);
  amount = printNoOfNotes(amount,50);
  amount = printNoOfNotes(amount,10);
  amount = printNoOfNotes(amount,5);
  printNoOfNotes(amount,1);

  return 0;
}