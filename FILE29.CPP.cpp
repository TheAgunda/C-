#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
void main()
{
clrscr();
int x[10],i,j,temp;
cout<<"enter 10 numbers to be sorted" ;
for(i=0;i<10;i++)
cin>>x[i];
for(i=0;i<10;i++)
{
temp=x[i];
j=i-1;
while(temp<x[j]&&j>=0)
{
x[j+1]=x[j];
j=j-1;
}
x[j+1]=temp;
}
cout<<"sorted array";
for(i=0;i<10;i++)
cout<<setw(4)<<x[i];
getch();
return;
}
