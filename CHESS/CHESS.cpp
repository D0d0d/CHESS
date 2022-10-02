#include <iostream>
#include "Field.h"
#include "Pawn.h"
int main()
{
    Field field = Field();
    std::cout << field.getField() <<std::endl;
    Pawn p = Pawn();
    field.addFigure(p);
    std::cout << field.getField();
}


