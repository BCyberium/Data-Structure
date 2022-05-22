#include <iostream>
#include <string>
#include "Teacher.h"
#include "Cadre.h"
#include "Teacher_Cadre.h"

int main()
{
    Teacher_Cadre person("Zhang",67,'M',"prof","chairman","u","086-123456", 7654321);
    person.show();
    return 0;
}