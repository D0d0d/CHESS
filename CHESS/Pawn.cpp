#include "Pawn.h"

Pawn::Pawn(): figure()
{
}

Pawn::Pawn(std::pair<int, int> Coords, signed char Side): figure(Coords,Side)
{
}

int Pawn::move(std::pair<int, int> newCoords, bool isAtack)
{
	// (-1, 1) (0,1) (1,1)
	std::pair<int, int> dCoords = {
		newCoords.first - this->cords.first*this->white,
		newCoords.second - this->cords.second*this->white
	};

	if ((isAtack&&(std::find(atack.begin(), atack.end(), dCoords) != end(atack))) ||
		(!isAtack&&(dCoords == this->step))) {
			this->cords = newCoords;
			return 0;
		} else { return 1; }
}


std::string Pawn::getImage()
{
	return Image;
}

std::vector<std::pair<int, int>> Pawn::UnderAtack()
{
	std::vector<std::pair<int, int>> buf;
	for (auto& i_atack : atack) {
		buf.push_back(std::make_pair(this->cords.first + i_atack.first, this->cords.second + i_atack.second));
	}
	return buf;
}
