#pragma once
#include "figure.h"
#include <string>
class Field
{
public:
	Field();
	int addFigure(figure& fig);
	figure& getFigure(std::pair<int, int> coords);

	int killFigure(std::pair<int,int> coords);
	std::string getField();

private:
	const char alph[27]="abcdefghijklmnopqrstuvwxyz";
	static const int x=8, y=8;
	figure* field[x][y] = {};
};

