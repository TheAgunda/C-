#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
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
 clrscr();
 int empcode;
 int flag=0;
 fstream empfile,tempfile;
 empfile.open("emp.dat",ios::binary||ios::nocreate);
 tempfile.open("temp.dat",ios::out);
 clrscr();
  cout<<"\nenter employee code to delete";
  cin>>empcode;
 while(empfile)
 {
  if(!empfile)
   exit(0);
  empfile.read((char*)&emp,sizeof(emp));
  if(emp.empcode==empcode)
  {
   flag=1;
  }
  else
   tempfile.write((char*)&emp,sizeof(emp));
  }
  empfile.close();
  tempfile.close();
  if(flag==1)
   cout<<"record deleted!!!";
  else
   cout<<"record not found!!!";
  fstream xfile,yfile;
  xfile.open("temp.dat",ios::binary||ios::nocreate);
  yfile.open("emp.dat",ios::out);
  while(xfile)
  {
   if(!xfile)
    exit(0);
   xfile.read((char*)&emp,sizeof(emp));
   yfile.write((char*)&emp,sizeof(emp));
  }
xfile.close();
yfile.close();
getch();
}