#include<iostream>
using namespace std;

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


int divs(int a, int b)
{
return a/b;
}

int main()
{

int loop_break=1;
int num1, num2;
char opr;


while(loop_break)
{
	cout<<"enter the number 1"<<endl;
	cin>>num1;
	cout<<"enter the opr"<<endl;
	cin>>opr;
	cout<<"enter the second number"<<endl;
        cin>>num2;
	switch(opr)
	{
	case '+':
	cout<<add(num1, num2)<<endl;
	break;



	case '-':
        cout<<sub(num1, num2)<<endl;
        break;
        case '*':
        cout<<mul(num1, num2)<<endl;
        break;


        case '/':
        cout<<divs(num1, num2)<<endl;
        break;
        default :
        cout<<"wrong option"<<endl;
        break;
	}
cout<<"press 1 to continue 0 to exit"<<endl;
cin>>loop_break;
}


return 0;
}
