#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
struct person
{
char name[30];
int age;
float salary;
}*p1;
p1=new person;
cout<<"enter  the  name=";
cin>>p1->name;
cout<<"enter the age=";
cin>>p1->age;
cout<<"enter the salary";
cin>>p1->salary;
cout<<"\nthe details of the person are:";
cout<<"\nName:"<<p1->name;
cout<<"\nAge:"<<p1->age;
cout<<"\nsalary:"<<p1->salary;
getch();
}









