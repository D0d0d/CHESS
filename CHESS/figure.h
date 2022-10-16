#pragma once
#include <utility>
#include <string>

class figure
{
public:
	figure();
	figure(std::pair<int,int> Coords, signed char Side);
	virtual int move(std::pair<int, int> newCoords, bool isAtack);
	std::pair<int, int> getCoords();
	signed char isWhite();
	virtual std::string getImage();
	std::pair<int, int> cords;
protected:

	signed char white;
	std::string Image = " ";
};

