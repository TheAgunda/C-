#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int number[5];
int *p;
p=number;
*p=10;
*(p+1)=20;
*(p+2)=30;
*(p+3)=40;
*(p+4)=50;
for(int n=0;n<5;n++)
{
cout<<number[n]<<" ";
}
getch();
}

