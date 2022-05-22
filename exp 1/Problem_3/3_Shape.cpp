#include <iostream>
#include "Shape.h"

int main()
{
    Circle cir(2);
    printArea(cir);
    Rectangle rec(6, 3);
    printArea(rec);
    Triangle tri(7, 5);
    printArea(tri);
    return 0;
}