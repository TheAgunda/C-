#include<iostream.h>
#include<conio.h>
 class test
 {
 static int count;
 public:
 void tro();
 void display();
 };
 int test::count=0;
 test::tro()
 {
 ++count;
 }
 void test::display()
 {
 cout<<"counter value="<<count<<endl;
 }
 void main()
 {
 test obj1,obj2;
 obj2.display();
 getch();
 }
