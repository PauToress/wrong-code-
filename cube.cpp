#include<iostream>
using namespace std;

class point
{
    public:
    //����x����
    void setx(int x)
    {
        m_x = x;
    }

    //��ȡx����
   int  getx()
    {
        return m_x;
    }
    //����y����
    void sety(int y)
    {
        m_y = y;
    }

    //��ȡy����
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
//���ð뾶��
 void setR(int r)
 {
    m_R=r;

 }
//��ȡ�뾶
int  getR()
{
    return m_R;
}
//����Բ��
void setcenter(point center)
{
    m_center=center;
}
//��ȡԲ��
point getcenter()
{
    return m_center;
}
private:
int m_R;
//Ҫ�ر�ע��������Ҷ����һ�������棬�ҿ��Ե�����һ���࣬ 
//���������' point' ,�������ǵ��õ��࣬��Ϊ�������cube����
// Բ����point �࣬�������ǵ��ù���
point m_center;


};
void isincube(cube &c,point&p)
{
  //ע�������д������ô����cube�������Բ�ģ����ȵ��õ���getcenter����������Ϊgetcenter��point�࣬�������ǻ���Ҫ
  //��һ������point �������getx������x���꣬
  int distance=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
  int rdistance=c.getR()*c.getR();
  if(distance==rdistance)
  {
    cout<<"��Բ��"<<endl;

  }else if(distance>rdistance)
  {
    cout<<"��Բ��"<<endl;
  }else 
  cout<<"��Բ��"<<endl;

} 




int main()
{ 
  //����һ��Բ
  cube c;

  //����Բ��
  c.setR(10);
  point center;
  center.setx(10);
  center.sety(10);
  c.setcenter(center);
  //����һ����
  point p;
  p.setx(0);
  p.sety(10);

 
  //�ж�Բ����λ�ù�ϵ
isincube(c,p);



    return 0;
}
