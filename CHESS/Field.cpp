#include "Field.h"

Field::Field()
{
}

int Field::addFigure(figure& fig)
{
	std::pair<int, int> cords = fig.getCoords();
	if (field[cords.first][cords.second] == 0) {
		field[cords.first][cords.second] = &fig;
		return 0;
	}
	else { return 1; }
}

figure& Field::getFigure(std::pair<int, int> coords)
{
	return *field[coords.first][coords.second];
}

int Field::killFigure(std::pair<int, int> coords)
{
	field[coords.first][coords.second] = 0;
	return 0;
}

std::string Field::getField()
{
	std::string res = "";
	for (int i=0;i<x;i++){
		for (int j = 0; j < y; j++) {
			std::string img = field[i][j] == 0 ? " " : field[i][j]->getImage();
			res += "["+img+"]";
		}
		res += "\n";
	}
	return res;
}
