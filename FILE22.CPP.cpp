#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=5,b=15;
int*pointer;
pointer=&a;
cout<<"\n*pointer"<<*pointer;
*pointer=10;
pointer=&b;
cout<<"\n*pointer"<<*pointer;
*pointer=20;
cout<<"\na="<<a<<"b="<<b;
getch();
}