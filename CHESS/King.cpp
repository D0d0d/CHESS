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
