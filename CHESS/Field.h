#pragma once
#include "figure.h"
#include "King.h"
#include <string>
class Field
{
public:
	Field();
	int addFigure(figure& fig, std::string pos);
	figure& getFigure(std::pair<int, int> coords);

	int killFigure(std::pair<int,int> coords);
	int Check(std::string pos);
	int Check(std::pair <int, int> cords);
	int moveFigure(std::string old_pos, std::string new_pos);
	std::string getField();

	std::pair<int, int> translateCoords(std::string coords);

private:
	const char alph[27]="abcdefghijklmnopqrstuvwxyz";
	static const int x=8, y=8;
	figure* field[x][y] = {};
};

