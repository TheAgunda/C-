#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct telephone
{
 int tno;
 char name[20];
};
telephone tele;
void append()
{
 ofstream tfile;
 tfile.open("tele.dat",ios::app);
 int n,i;
 for(i=0;i<n;i++)
 {
  cout<<"\n enter telephonr number:";
  cin>>tele.tno;
  cout<<"\n enter name:";
  gets(tele.name);
  tfile.write((char*)&tele,sizeof(tele));
 }
tfile.close();
}
void display()
{
 ifstream tfile;
 tfile.open("tele.dat",ios::binary);
 int no,flag;
 flag=0;
 cout<<"\n enter telephone number to be searched:";
 cin>>no;
 while(tfile)
 {
  tfile.read((char*)&tele,sizeof(tele));
  if(!tfile)
   break;
  if(tele.tno==no)
  {
   cout<<"\n name:"<<tele.name;
   cout<<"\n telephone number:"<<tele.tno;
   flag=1;
  }
 }
 if(flag==0)
  cout<<"\n record does not exist";
}
void main()
{
 clrscr();
 append();
 display();
 getch();
}