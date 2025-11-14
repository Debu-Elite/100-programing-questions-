#include<stdio.h>

int main()
{
int x=10;
int y;
printf("enter the string:");
char str[50];
fgets(str, sizeof(str), stdin);
printf("enter the value for interger\n");
scanf("%d",&y);
float f =4.4;
double d =8.4444;
char *ptr="hello from c";

printf("x=%d  y=%d\n",x,y);
printf("flaot value %f\n",f);
printf("double:%f\n",d);
printf("ptr=%s\n",ptr);
printf("str=%s\n",str);
return 0;
}
