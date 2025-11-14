#include<stdio.h>

void swap(int *num1, int *num2)
{
*num1=*num1+*num2;
*num2=*num1-*num2;
*num1=*num1-*num2;
}

int main()
{
int num1,num2;
printf("enter the number1 and number 2\n");
scanf(" %d %d",&num1,&num2);
swap(&num1, &num2);
printf("swap value of num1=%d num2=%d",num1, num2);
return 0;
}
