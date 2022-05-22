#include <iostream>
#include "Point.h"

int main()
{  Point p,p1,p2,p3;
   cin>>p;     //输入0 0  进行测试 
   cout<<"p="<<p<<'\n';
   p.move(1,2);        //1 2
   cout<<"new p="<<p<<'\n';
   p1=p;     //1 2
   cout<<"p="<<p<<" p1="<<p1<<'\n';
   p2=p1*3;    //3  6
   cout<<"p1="<<p1<<" p2=p1*3="<<p2<<'\n';
   p3=p1+p2;
   cout<<"p1="<<p1<<" "<<"p2="<<p2<<" p3=p1+p2="<<p3<<'\n';
   if (p3>p2) cout<<"p3="<<p3<<" p2="<<p2<<" p3>p2"<<'\n';
   if (p1<p2) cout<<"p1="<<p1<<"  p2="<<p2<<" p1<p2"<<'\n';
   if (p1==p1) cout<<"p1==p1"<<'\n';
   
   return 0;
}