#include<fstream.h>
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
 int empcode;
 fstream empfile,tempfile;
 empfile.open("emp.dat",ios::binary||ios::nocreate);
 tempfile.open("temp.dat",ios::out);
 clrscr();
 cout<<"enter employee code to modify";
 cin>>empcode;
 empfile.read((char*)&emp,sizeof(emp));
 while(empfile)
 {
  if(!empfile)
   exit(0);
  if(emp.empcode==empcode)
  {
   cout<<"\ncode is:"<<emp.empcode;
   cout<<"\nname is:"<<emp.empname;
   cout<<"\ndesignation:"<<emp.empdesig;
   cout<<"\nsalary is:"<<emp.empsalary;
   cout<<"\nenter new employee code:";
   cin>>emp.empcode;
   cout<<"employee name:";
   gets(emp.empname);
   cout<<"employee designation:";
   gets(emp.empdesig);
   cout<<"salary:";
   cin>>emp.empsalary;
   tempfile.write((char*)&emp,sizeof(emp));
  }
else
 tempfile.write((char*)&emp,sizeof(emp));
 empfile.read((char*)&emp,sizeof(emp));
}
empfile.close();
tempfile.close();
fstream xfile,yfile;
xfile.open("temp.dat",ios::binary||ios::nocreate);
yfile.open("emp.dat",ios::out);
while(xfile)
{
 if(!xfile)
  exit(0);
 yfile.write((char*)&emp,sizeof(emp));
 xfile.read((char*)&emp,sizeof(emp));
}
xfile.close();
yfile.close();
getch();
}