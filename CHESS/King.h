#pragma once
#include "figure.h"
#include <vector>
class King :
    public figure
{
public:
    King();
    King(std::pair<int, int> Coords, signed char Side);
    int move(std::pair<int, int> newCoords, bool isAtack);
    std::string getImage();
private:
    bool clear;
    const std::vector<std::pair<int, int>> step = { {-1,1}, {0,1}, {1,1}, {-1,0}, {1,0}, {-1,-1}, {0,-1}, {1,-1} };
protected:
    std::string Image = "k";
};

