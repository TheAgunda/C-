#include<fstream.h>
#include<iostream.h>
#include<ctype.h>
#include<conio.h>
void display()
{
 ifstream afile;
 afile.open("story.txt");
 char ch;
 int c=0;
 while(afile)
 {
  afile.get(ch);
  if(isalpha(ch))
   c++;
 }
 cout<<"number of alphabets;"<<c;
}
void main()
{
 clrscr();
 display();
 getch();
}