1.Program to display class.
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
class Student
{
int rollno;
char name[15];
float marks;
char grade;
public:
void getdata()
{
cout<<"enter rollno of the student\n";
cin>>rollno;
cout<<"|n enter name";
gets(name);
cout<<"|n enter marks";
cin>>marks;
}
void calcgrade()
{
if(marks>=90)
grade='A';
else if(marks>=75)
grade='B';
else if(marks<75)
grade='C';
}
void display_data()
{
cout<<"|n roll numberis:|t"<<rollno;
cout<<"|n name is:|t"<<name;
cout<<"|n marks are:"<<marks;
cout<<"|n grade is:|t"<<grade;
}
};
void main()
{
clrscr();
Student s;
s.getdata();
s.calcgrade();
s.display_data();
getch();
}

