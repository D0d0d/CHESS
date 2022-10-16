#include "figure.h"

figure::figure()
{
	this->cords = { 0,0 };
	this->white = 1;
}

figure::figure(std::pair<int, int> Coords, signed char Side)
{
	this->cords = Coords;
	this->white = Side;
}

int figure::move(std::pair<int, int> newCoords, bool isAtack)
{
	this->cords = newCoords;
	return 0;
}

std::pair<int, int> figure::getCoords()
{
	return this->cords;
}

signed char figure::isWhite()
{
	return white>0?true:false;
}

std::string figure::getImage()
{
	return Image;
}
