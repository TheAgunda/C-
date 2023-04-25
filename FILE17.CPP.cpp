#include<fstream.h>
#include<conio.h>
void countline()
{
 ifstream fil("story.txt");
 int lines=0;
 char str;
 while(fil)
 {
  fil.get(str);
  if(str=='.')
   lines++;
 }
cout<<"number of lines:"<<lines<<endl;
}
void main()
{
 clrscr();
 countline();
 getch();
}