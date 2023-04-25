//circular queue
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void push(int x[],int n,int&m,int data);
void pop(int&m);
void display(int x[],int&m);
void main()
{
clrscr();
int x[100],m,data,choice;
m=0;
do
{
cout<<"\nSTACK MENU";
cout<<"\n1.push";
cout<<"\n2.pop";
cout<<"\n3.display";
cout<<"\n4.exit";
cout<<"\n5.enter the choice";
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter value";
cin>>data;
push(x,100,m,data);
break;
case 2:
pop(m);
break;
case 3:
display(x,m);
getch();
break;
case 4:
break;
default:
cout<<"wrong choice";
getch();
}
}while(choice!=4);
}
void push(int x[],int n,int&m,int data)
{
if(m>=n)
cout<<"stack full";
else
{
x[m]=data;
m=m+1;
}
return;
}
void pop(int&m)
{
if(m<1)
cout<<"stack empty";
else
m=m+1;
return;
}
void display(int x[],int&m)
{
int i;
if(m<1)
cout<<"\nstack empty";
else
for(i=0;i<m;i++)
cout<<setw(6)<<x[i];
return;
}




