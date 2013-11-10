#ifndef IPOSITIONABLE_H
#define IPOSITIONABLE_H

/***
Inteface: IPositionable
=======================
Classes implementing this interface can be
positioned in two spatial dimensions.
Properties like width and height are
implemented elsewhere.
***/
class IPositionable {
public:
	virtual float getX() const = 0;
	virtual float getY() const = 0;
	
	virtual void setX(const float& x) = 0;
	virtual void setY(const float& y) = 0;
};

#endif /* IPOSITIONABLE_H */
