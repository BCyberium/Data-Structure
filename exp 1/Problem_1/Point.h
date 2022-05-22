#ifndef _POINT_H
#define _POINT_H
using namespace std;

class Point {	
 public:	  	
    Point(); 
    Point(int, int);  
	~Point(){};  
    Point(const Point &p) : x(p.x), y(p.y) {}//复制构造函数);
    void move(int newX,int newY);
	int getX() const { return x; }
	int getY() const { return y; }
    Point& operator=(const Point& p);//重载赋值运算符
    Point operator+(const Point& p);//重载+运算符:当前对象+参数中对象p 
    Point operator*(const int i);//重载*运算符:当前对象*参数表中整数i
	bool operator>(const Point& p);//重载>运算符:判断当前对象>参数中对象p否 
    bool operator<(const Point& p);//重载<运算符:判断当前对象<参数中对象p否 
	bool operator==(const Point& p);//重载==运算符:判断当前对象=参数中对象p否
    friend istream & operator >> (istream &in,  Point &p);		//运算符<<重载
    friend ostream & operator << (ostream &out, const Point &p);		//运算符<<重载

  private:				//私有数据成员
	int x, y;
};
Point::Point() // 在类外定义无参构造函数Point（）
{
    x = 0;
    y = 0;
}
Point::Point(int a, int b)  // 参数列表
{
    x = a;
    y = b;
}
void Point::move(int newX, int newY)
{
    this->x = newX;
    this->y = newY;
}
Point& Point::operator=(const Point& p)
{
    this->x = p.x;
    this->y = p.y;
    return *this;
}
Point Point::operator+(const Point& p)
{
    Point tmp = Point(x + p.x, y + p.y);
    return tmp;
}
Point Point::operator*(const int i)
{
    Point tmp = Point(x * i, y * i);
    return tmp;
}
bool Point::operator>(const Point& p)
{
    if (x > p.x && y > p.y)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool Point::operator<(const Point& p)
{
    if (x < p.x && y < p.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Point::operator==(const Point& p)
{
    if (x == p.x && y == p.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}


istream& operator>>(istream& in, Point& p)
{
    cout<<"*****************************************"<<endl;
    cout<<"        Please input two integers.       "<<endl;
    cout<<"*****************************************"<<endl;
    in>>p.x>>p.y;
    return in;
}


ostream& operator<<(ostream& out, Point& p)
{
    out<<"("<<p.getX()<<", "<<p.getY()<<") ";
    return out;
}

#endif	//_POINT_H