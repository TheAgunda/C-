#include<iostream.h>
#include<conio.h>
class A
{
public:
int a,b;
void getnumber()
{
cout<<"\n\nEnter number:::\t";
cin>>a;
}
};
class B:public A
{
public:
void square()
{
getnumber();
cout<<"\n\n\tsquare of the number:::\t"<<(a*a);
cout<<"\n\n\t_________________________";
}
};
class C:public A
{
public:
void cube()
{
getnumber();
cout<<"\n\n\tcube of the number:::\t"<<(a*a*a);
cout<<"\n\n\t_____________________";
}
};
int main()
{
clrscr();
B b1;
b1.square();
C c1;
c1.cube();
getch();
}