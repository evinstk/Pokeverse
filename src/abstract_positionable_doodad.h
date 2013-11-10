#ifndef ABSTRACT_POSITIONABLE_DOODAD_H
#define ABSTRACT_POSITIONABLE_DOODAD_H

#include "ipositionable.h"
#include "doodad.h"

/***
Abstract Base: AbstractPositionableDoodad
Implements: IPositionable
=========================================
Interface/abstract class extending the IPositionable
interface. Implementations of this interface should
give the position and dimensions of a doodad.
***/
class AbstractPositionableDoodad: public IPositionable {
public:
	virtual Doodad::Type getType() const = 0;
	virtual unsigned int getW() const = 0;
	virtual unsigned int getH() const = 0;
};

#endif /* ABSTRACT_POSITIONABLE_DOODAD_H */
