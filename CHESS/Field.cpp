#include "Field.h"

Field::Field()
{
}
std::pair<int, int> Field::translateCoords(std::string coords)
{
	return std::make_pair(strchr(alph, coords[0]) - alph, coords[1] - '0' - 1);
}
int Field::addFigure(figure& fig, std::string pos)
{

	std::pair<int, int> cords = translateCoords(pos);
	fig.cords = cords;
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

int Field::moveFigure(std::string old_pos, std::string new_pos)
{
	if (!(old_pos.length() > 2 || new_pos.length() > 2)) {
		std::pair <int, int> old_coords = translateCoords(old_pos);
		std::pair <int, int> new_coords = translateCoords(new_pos);
		bool isAtack = this->field[new_coords.first][new_coords.second]==0?false:true;
		if (this->field[old_coords.first][old_coords.second]!=0) {
			if (this->field[old_coords.first][old_coords.second]->move(new_coords, isAtack) == 0) {
				this->field[new_coords.first][new_coords.second] = this->field[old_coords.first][old_coords.second];
				this->field[old_coords.first][old_coords.second] = 0;
			}
		}
		return 1;
	}
}

std::string Field::getField()
{
	std::string res;
	for (int j = 0; j < y; j++) {
		res += " " + std::to_string(j + 1) + " ";
		for (int i = 0; i < x; i++) {
			std::string img = field[i][j] == 0 ? " " : field[i][j]->getImage();
			res += "["+img+"]";
		}
		res += "\n";
	}
	res+= "  / a  b  c  d  e  f  g  h \n";
	return res;
}


