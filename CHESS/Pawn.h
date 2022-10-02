#pragma once
#include "figure.h"
class Pawn : public figure
{
public:
    Pawn();
    Pawn(std::pair<int, int> Coords, signed char Side);
    int move(std::pair<int, int> newCoords, bool isAtack);
    std::string getImage();
private:
    bool clear;
    const std::pair<std::pair<int, int>, std::pair<int, int>> atack = { {-1,1},{1,1} };
    const std::pair<int, int> step = { 0,1 };
protected:
    std::string Image = "o";
};

