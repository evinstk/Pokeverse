#ifndef POSITIONABLE_DOODAD_H
#define POSITIONABLE_DOODAD_H

#include "abstract_positionable_doodad.h"
#include "doodad.h"

/***
Class: PositionableDoodad
Extends: AbstractPositionableDoodad
===================================
Concrete class that wraps Doodad object and
implements the IPositionable interface.
Dimension responsibilities are delegated to
the Doodad object.
Favors composition over a messy inheritance
structure.
***/
class PositionableDoodad: public AbstractPositionableDoodad {
public:
	float getX() const;
	float getY() const;
	void setX(const float& x);
	void setY(const float& y);

	/* Delegated methods */
	Doodad::Type getType() const;
	unsigned int getW() const;
	unsigned int getH() const;
private:
	Doodad* _doodad;
	unsigned int _x;
	unsigned int _y;
};

#endif /* POSITIONABLE_DOODAD_H */
