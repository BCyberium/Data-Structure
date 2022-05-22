#include <iostream>
#include "Shape.h"

int main()
{
    Circle cir(1);
    Square squ(4);
    Rectangle rec(2, 3);
    Trapezoid tra(2, 3, 4);
    Triangle tri(5, 6);
    printArea(cir);
    printArea(squ);
    printArea(rec);
    printArea(tra);
    printArea(tri);
    Shape* p[5] = {&cir, &squ, &rec, &tra, &tri};
    cout<<"total area: "<<total(p, 5)<<endl;
    return 0;
}