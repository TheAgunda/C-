#include<iostream.h>
#include<conio.h>
class item
{
private:
int itemcode[10];
float price[10];
public:
void getdata();
float cal_totalprice();
float show();
};
void item::getdata()
{
int i;
for(i=0;i<5;i++)
{
cout<<"enter itemcode"<<i+1;
cin>>itemcode[i];
cout<<"enter price";
cin>>price[i];
}
}
float item::cal_totalprice()
{
float sum=0;
int i;
for(i=0;i<5;i++)
{
sum+=price[i];
}
return sum;
}
float item::show()
{
int i=0;
float s;
for(i=0;i<5;i++)
{
cout<<"item code="<<itemcode[i];
cout<<"item price|t"<<price[i];
}
s=cal_totalprice();
cout<<endl<<"the total price of all the items="<<s;
}
void main()
{
item i;
i.getdata();
clrscr();
i.show();
getch();
}