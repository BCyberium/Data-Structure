#ifndef _SHAPE_H
#define _SHAPE_H

using namespace std;
const double pi = 3.14156;

class Shape
{
public:
    virtual double area() const = 0;
    virtual void shapeName() const = 0;
};

class Circle: public Shape
{
public:
    Circle(double r);
    virtual double area() const;
    virtual void shapeName() const {cout<<"Circle:    ";}
protected:
    double radius;
};

Circle::Circle(double r):radius(r){}

double Circle::area() const
{
    return pi * radius * radius;
}

class Rectangle: public Shape
{
protected:
    double width;
    double height;
public:
    Rectangle(double w, double h);
    virtual double area() const;
    virtual void shapeName() const {cout<<"Rectangle:    ";}
};

Rectangle::Rectangle(double w, double h):width(w), height(h){}

double Rectangle::area() const
{
    return width * height;
}

class Triangle: public Shape
{
protected:
    double width;
    double height;
public:
    Triangle(double w, double h);
    virtual double area() const;
    virtual void shapeName() const {cout<<"Triangle:    ";}
};

Triangle::Triangle(double w, double h):width(w), height(h){}

double Triangle::area() const
{
    return 0.5 * width * height;
}

void printArea(Shape& s)
{
    s.shapeName();
    cout<<s.area()<<endl;
}

#endif