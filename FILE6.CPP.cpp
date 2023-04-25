class x
{
public:
int numx;
void funcx()
{
}
};
x objx1;
void main()
{
class y
{
public:
int numy;
void funcy()
{
}
};
x objx2;
y objy1,objy2;
objx1.numx=5;
objx2.numx=25;
objx2.funcx();
objx1.funcx();
objy1.numy=6;
objy2.funcy();
objy2.funx();
}
void newfunc()
{
x objx3;
y objy3;
objx3.funcx();
cout<<objx2.numx;
objx1.numx=20;
}