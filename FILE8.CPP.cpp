#include<iostream.h>
#include<conio.h>
class code
{
int no;
char branch;
static int count;
public:
code(int i=0,char b);
code(code &A)
{
no=A.no;
branch=A.branch;
}
~code()
{
cout<<"destroying object"<<--count<<"\n";
}
};
int code :: count=0;
code::code(int i,char b)
{
no=i;
branch=b;
}
void main()
{
code x,y;
getch();
}