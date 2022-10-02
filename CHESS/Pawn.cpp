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

	if ((isAtack&&(dCoords == atack.first || dCoords == atack.second)) ||
		(!isAtack&&(dCoords == this->step))) {
			this->cords = newCoords;
			return 0;
		} else { return 1; }

}

std::string Pawn::getImage()
{
	return Image;
}
