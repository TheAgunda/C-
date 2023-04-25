#include<conio.h>
#include<iostream.h>
int linear_search(int x[],int n,int data)
{
int i,found=0;
for(i=0;i<n;i++)
{
if(x[i]==data)
found=1;
}
return(found);
}
int main()
{
clrscr();
int x[10],data,i;
cout<<"enter 10 numbers";
for(i=0;i<10;i++)
{
cin>>x[i];
}
cout<<"\nenter no.to be searched";
cin>>data;
int res=linear_search(x,10,data);
if(res==1)
cout<<"\nfound";
else
cout<<"not found";
getch();
return 0;
}