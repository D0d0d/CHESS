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

    //Pawn p = Pawn();
    field.addFigure(*new Pawn(),"a1");
    //King k = King();
    field.addFigure(*new King(),"b4");
    std::cout << field.getField() << std::endl;
    int buf = 0;
    buf = field.moveFigure("a1", "a2");

    std::cout << field.getField() << std::endl;
    if (buf==2) {
        std::cout <<" ITS CHECK " << "\n" << std::endl;
    }

    //p.move(std::make_pair(0, -1), true);
    //std::cout << field.getField() << std::endl;
}


