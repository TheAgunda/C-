#include<iostream.h>
#include<conio.h>
int binary_search(int a[],int n,int data)
{
int first,last,mid;
int found=0;
first=0;
last=n-1;
while(first<=last&&found==0)
{
mid=int((first+last)/2);
if(a[mid]==data)
found=1;
if(a[mid]==data)
found=1;
if(a[mid]==data)
found=1;
if(a[mid]<data)
first=mid+1;
if(a[mid]>data)
last=mid-1;
}
return(found);
}
int main()
{
clrscr();
int x[10],data,i;
cout<<"\n enter 10 numbers in ascending order";
for(i=0;i<10;i++)
{
cin>>x[i];
}
cout<<"enter the no. to be searched";
cin>>data;
int res=binary_search(x,10,data);
if(res==1)
cout<<"\nfound";
else
cout<<"\n not found";
getch();
return 0;
}
