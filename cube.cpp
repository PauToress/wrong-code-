#include<iostream>
using namespace std;

class point
{
    public:
    //设置x坐标
    void setx(int x)
    {
        m_x = x;
    }

    //获取x坐标
   int  getx()
    {
        return m_x;
    }
    //设置y坐标
    void sety(int y)
    {
        m_y = y;
    }

    //获取y坐标
  int  gety()
    {
        return m_y;
    }
    private:
    int m_x;
    int m_y;



};
class cube
{

public:
//设置半径、
 void setR(int r)
 {
    m_R=r;

 }
//获取半径
int  getR()
{
    return m_R;
}
//设置圆心
void setcenter(point center)
{
    m_center=center;
}
//获取圆心
point getcenter()
{
    return m_center;
}
private:
int m_R;
//要特别注意这里，在我定义的一个类里面，我可以调用另一个类， 
//比如这里的' point' ,就是我们调用的类，因为在我这个cube里面
// 圆心是point 类，所以我们调用过来
point m_center;


};
void isincube(cube &c,point&p)
{
  //注意这里的写法，怎么调用cube类里面的圆心，首先调用的是getcenter函数，又因为getcenter是point类，所以我们还需要
  //进一步调用point 类里面的getx来调用x坐标，
  int distance=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
  int rdistance=c.getR()*c.getR();
  if(distance==rdistance)
  {
    cout<<"在圆上"<<endl;

  }else if(distance>rdistance)
  {
    cout<<"在圆外"<<endl;
  }else 
  cout<<"在圆内"<<endl;

} 




int main()
{ 
  //创建一个圆
  cube c;

  //设置圆心
  c.setR(10);
  point center;
  center.setx(10);
  center.sety(10);
  c.setcenter(center);
  //设置一个点
  point p;
  p.setx(0);
  p.sety(10);

 
  //判断圆与点的位置关系
isincube(c,p);



    return 0;
}
