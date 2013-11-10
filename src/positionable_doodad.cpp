#include "positionable_doodad.h"

float PositionableDoodad::getX() const {
	return (float)_x;
}

float PositionableDoodad::getY() const {
	return (float)_y;
}

void PositionableDoodad::setX(const float& x) {
	_x = (unsigned int)x;
}

void PositionableDoodad::setY(const float& y) {
	_y = (unsigned int)y;
}

/*** DELEGATED ***/
Doodad::Type PositionableDoodad::getType() const {
	return _doodad->getType();
}

unsigned int PositionableDoodad::getW() const {
	return _doodad->getW();
}

unsigned int PositionableDoodad::getH() const {
	return _doodad->getH();
}
