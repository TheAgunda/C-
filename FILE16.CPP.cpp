#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void vowelwords()
{
 fstream afile,bfile;
 char ch,ch1;
 afile.open("text1.txt",ios::in);
 bfile.open("text2.txt",ios::out);
 ch1=' ';
 clrscr();
while(afile)
{
 afile.get(ch);
 cout<<"\n outside="<<ch;
 if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')&&(ch1==' '))
 {
  while(ch!=' ')
  {
   afile.get(ch);
   ch1=ch;
   if(ch==' ')
    break;
  }
 }
 else
  bfile.put(ch);
}
afile.close();
bfile.close();
}
void main()
{
 clrscr();
 vowelwords();
 getch();
}