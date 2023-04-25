#include<iostream.h>
#include<conio.h>
class Rectangle
{
float length;
float breadth;
public:
void input()
{
cout<<"Enter the lenght and breadth of the rectangle:\n";
cin>>length>>breadth;
}
float area_rect();
};
float Rectangle::area_rect()
{
return length*breadth;
}
void main()
{
clrscr();
Rectangle r;
r.input();
float area=r.area_rect();
cout<<"Area of rectangle is:"<<area;
getch();
}