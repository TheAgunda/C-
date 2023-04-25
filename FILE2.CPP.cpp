#include<iostream.h>
#include<conio.h>
class employee
{
private:
char name[30];
int age;
float salary;
public:
void getdata();
void update_salary(float comm);
void show();
};
void employee::getdata()
{
cout<<"Enter name of the employee";
cin>>name;
cout<<"Enter age";
cin>>age;
cout<<"Enter salary";
cin>>salary;
}
void employee::update_salary(float comm)
{
salary=salary+comm;
}
void employee::show()
{
cout<<endl<<"The employee name is:"<<name;
cout<<endl<<"The age is:"<<age;
cout<<"The total salary:"<<salary;
}
void main()
{
clrscr();
employee e;
float comm;
e.getdata();
cout<<"Enter commission";
cin>>comm;
e.update_salary(comm);
e.show();
getch();
}
