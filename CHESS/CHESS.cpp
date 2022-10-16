#include <iostream>
#include "Field.h"
#include "Pawn.h"
#include "King.h"
#include <cstdlib>;
#include <windows.h>;
int main()
{


    Field field = Field();
    std::cout << field.getField() <<std::endl;

    Pawn p = Pawn();
    field.addFigure(p,"a1");
    King k = King();
    field.addFigure(k,"b3");
    std::cout << field.getField() << std::endl;

    field.moveFigure("a1", "a2");
    std::cout << field.getField() << std::endl;
    //p.move(std::make_pair(0, -1), true);
    //std::cout << field.getField() << std::endl;
}


