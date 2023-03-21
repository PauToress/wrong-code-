#include <iostream>
using  namespace std;


typedef struct
{
    float realpart;
    float imagepart;

}complex;
void Creat(complex c, float x, float y)
{
    c.realpart = x;
    c.imagepart = y;
} // 目的是构造一个复数；
float getreal(complex c)
{
    return c.realpart;
} // 目的是取实部
float getimage(complex c)
{
    return c.imagepart;
} // 目的是取虚部
complex add(,complex c1, complex c2)
{
  
    sum.realpart = c1.realpart + c2.realpart;
    sum.imagepart = c1.imagepart + c2.imagepar;
}
complex sub(difference, complex c1, complex c2)
{
    
    difference.realpart = c1.realpart - c2.realpart;
    difference.imagepart = c1.imagepart - c2.imagepart;
    

} //
int main()
{
    complex z1, z2;
    Creat(z1, 8.0, 5.0);
    Creat(z2, 5.0, 3.0);
    getimage(z2);
    getreal( z1);

    cout<<"该复数为:"<<getreal<<endl;

    return 0;
}