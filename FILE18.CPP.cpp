#include<fstream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 clrscr();
 ifstream fin;
 fin.open("emp.dat");
 ofstream fout("temp.dat");
 char line[80];
 while(!fin.eof())
 {
  fin.getline(line,80);
  if(isupper(line[0]))
  fout<<line<<"\n";
 }
 fin.close();
 fout.close();
 cout<<"file conversion done.\n";
 getch();
}