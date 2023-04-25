#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
 int empcode;
 char empname[20];
 char empdesig[15];
 float empsalary;
};
employee emp;
void main()
{
fstream sfile;
sfile.open("emp.dat",ios::app);
char ans;
ans='y';
clrscr();
do
{
 clrscr();
 gotoxy(25,2);
 cout<<"employee console";
 gotoxy(20,4);
 cout<<"employee code";
 cin>>emp.empcode;
 gotoxy(20,6);
 cout<<"name=";
 gets(emp.empname);
 gotoxy(20,8);
 cout<<"designation=";
 gets(emp.empdesig);
 gotoxy(20,10);
 cout<<"salary=";
 cin>>emp.empsalary;
 sfile.write((char*)&emp,sizeof(emp));
 gotoxy(20,12);
 cout<<"do you want to continue...";
 cin>>ans;
}
while(ans=='y');
sfile.close();
getch();
}