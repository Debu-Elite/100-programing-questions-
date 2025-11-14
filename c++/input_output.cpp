#include<iostream>
using namespace std;
int main()
{
int a;
float b;
double c;
string d;
char *str="hello from immutable string c type";
bool e;
cout<<"enter the int , float, double,string,bool value"<<endl;
cin>>a>>b>>c;
cin.ignore(); // clear leftover '\n'

    cout << "enter a full string:" << endl;
    getline(cin, d);  // read full line with spaces
cout<<"before bool"<<endl;
cin >> boolalpha >> e;
cout<<"int a=:"<<a<<" float b=: "<<b<<" double c=: "<<"string d= "<<d<<endl;
cout<<"constant string str=: "<<str<<endl;
cout<<"bool e=: "<<e<<endl;


return 0;
}
