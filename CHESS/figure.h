#pragma once
#include <utility>
#include <string>
class figure
{
public:
	figure();
	figure(std::pair<int,int> Coords, signed char Side);
	virtual int move(std::pair<int, int> newCoords);
	std::pair<int, int> getCoords();
	signed char isWhite();
	virtual std::string getImage();
protected:
	std::pair<int, int> cords;
	signed char white;
	std::string Image = " ";
};

