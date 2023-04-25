#include<iostream.h>
#include<process.h>
#include<conio.h>
#define size 5
class stack
{
int a[size];
int top;
public:
stack()
{
top=-1;
}
void push(int);
int pop();
void display();
};
void stack::push(int item)
{
if(top==size-1)
cout<<"stack is overflow";
else
{
top++;
a[top]=item;
}
}
int stack::pop()
{
if(top==-1)
{
cout<<"stackis underflow";
return-1;
}
else
{
int item=a[top];
top--;
return item;
}
}
void stack::display()
{
int i;
for(i=top;i>=0;i--)
cout<<a[i]<<"\t";
}

void main()
{
clrscr();
stack s1;
int choice,val;
do
{
clrscr();
cout<<endl<<"main menu";
cout<<endl<<"1.push";
cout<<endl<<"2.pop";
cout<<endl<<"3.display";
cout<<endl<<"4.quit";
cout<<endl<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1:cout<<"enter the val to be pushed";
cin>>val;
s1.push(val);
break;
case 2:int i;
i=s1.pop();
if(i!=-1)
cout<<endl<<"the value to be popped"<<i;
break;
case 3:
s1.display();
break;
case 4:
exit(0);
break;
}
}
while(1);
getch();
}
