#include "King.h"

King::King()
{
}

King::King(std::pair<int, int> Coords, signed char Side): figure(Coords, Side)
{
}

int King::move(std::pair<int, int> newCoords, bool isAtack)
{
	std::pair<int, int> dCoords = {
		newCoords.first - this->cords.first * this->white,
		newCoords.second - this->cords.second * this->white
	};

	if ((isAtack && (std::find(step.begin(), step.end(), dCoords) != end(step)))) {
		this->cords = newCoords;
		return 0;
	}
	else { return 1; }
}

std::string King::getImage()
{
	return Image;
}

std::vector<std::pair<int, int>> King::UnderAtack()
{
	std::vector<std::pair<int, int>> buf;
	for (auto& i_atack : step) {
		buf.push_back(std::make_pair(this->cords.first + i_atack.first, this->cords.second + i_atack.second));
	}
	return buf;
}