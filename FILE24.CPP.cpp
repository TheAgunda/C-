#include<iostream.h>
#include<conio.h>
void exchange(int&,int&);
void main()
{
clrscr();
int a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
exchange(a,b);
cout<<"new val of a="<<a<<endl;
cout<<"new val of b="<<b;
getch();
}
void exchange(int&x,int&y)
{
int temp;
temp=x;
x=y;
y=temp;
}

