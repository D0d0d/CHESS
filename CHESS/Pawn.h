#pragma once
#include "figure.h"
#include <vector>
class Pawn : public figure
{
public:
    Pawn();
    Pawn(std::pair<int, int> Coords, signed char Side);
    int move(std::pair<int, int> newCoords, bool isAtack);
    std::string getImage();
    std::vector<std::pair<int, int>> UnderAtack();
private:
    bool clear;
    const std::vector<std::pair<int, int>> atack = { {-1,1},{1,1} };
    const std::pair<int, int> step = { 0,1 };
protected:
    std::string Image = "o";
};

