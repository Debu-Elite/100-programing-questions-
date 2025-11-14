#include<stdio.h>
void even_odd(int x)
{

char ch= (char)x;


if(ch&0x01)
printf("odd\n");
else 
printf("even\n");

}
int main()
{
int x=11;
even_odd(x);
x=22222;
even_odd(x);
return 0;
}
