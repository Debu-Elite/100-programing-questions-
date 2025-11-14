#include<stdio.h>

int add(int a, int b)
{
return a+b;
}

int sub(int a, int b)
{
return a-b;
}

int mul(int a, int b)
{
return a*b;
}

int div(int a, int b)
{
return a/b;
}
int main()
{

int loop_break=1;

char opr;
int num1, num2;
while(loop_break)
{
	printf("enter the vale: ");
	scanf(" %d",&num1);
	printf("\nenter the operator like +,-,*,/ ");
	scanf(" %c",&opr);
	printf("\nenter the second value ");
	scanf(" %d",&num2);
	switch(opr)
	{
	 case '+':
	  printf("res= %d",add(num1,num2));
          break;



         case '-':
          printf("res= %d",sub(num1,num2));
          break;
 



         case '*':
          printf("res= %d",mul(num1,num2));
          break;


         case '/':
          printf("res= %d",div(num1,num2));
          break;

         default :
         printf("wrong input ");
	 break;
        }
printf("\ndo you want to continue press 1 if not press 0: ");
scanf("%d",&loop_break);
}


return 0;
}
