#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
ifstream in_obj;
ofstream out_obj;
void main()
{
char in_char;
in_obj.open("temp.DAT",ios::in);
out_obj.open("copy DAt",ios::out);
if(!in_obj)
{
 cerr<<"\n\n**file does not exist**\n";
 exit(0);
}
 cout<<"\n copying....\n";
 while(in_obj.get(in_char))
 {
 out_obj.put(in_char);
 }
cout<<"\n file is copied\n";
in_obj.close();
out_obj.close();
cout<<"\nchecking output of copied file\n";
in_obj.open("copy.dat",ios::in);
cout<<"\nthe contents of copy.dat is:\n";
while(in_obj.get(in_char))
cout<<in_char;
out_obj.close();
getch();
}
