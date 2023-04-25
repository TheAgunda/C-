#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 ifstream fin("emp.dat");
 ofstream fout("temp.dat");
 char ch;
 int ctr=0;
 while(fin)
 {
  fin.get(ch);
  if(ch!=' ')
  {
    ctr=1;
    fout.put(ch);
  }
  else if(ctr==1)
  {
    ctr++;
    fout<<' ';
  }
}
fin.close();
fout.close();
getch();
}