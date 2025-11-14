#include<iostream>
using namespace std;
void even_odd(int x)
{
x=x&0x01;
if(x)
cout<<"is odd"<<endl;
else 
cout<<"even"<<endl;

}
int main()
{
int x=10;
even_odd(x);
int y=11;
even_odd(y);



return 0;
}
