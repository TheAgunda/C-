#include<iostream.h>
#include<conio.h>
class Product
{
int qty;
float cost;
public:
//prototypes/declaration of member functions
void getdata();
void putdata();
};
//function definition of member function using::operator
void Product::getdata()
{
cout<<"Enter the quantity and cost\n";
cin>>qty>>cost;
}
void Product::putdata()
{
cout<<"\n Quantity is:"<<qty<<endl;
cout<<"\n cost is:"<<cost<<endl;
}
void main()
{
clrscr();
Product P;
cout<<"The object P is:"<<endl;
P.getdata();
P.putdata();
Product Q;
cout<<"The object Q is:"<<endl;
Q.getdata();
Q.putdata();
getch();
}
