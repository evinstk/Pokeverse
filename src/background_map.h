#ifndef BACKGROUND_MAP_H
#define BACKGROUND_MAP_H

#include "background.h"

/**
 * Abstract Class: BackgroundMap
 * =============================
 * This is the most primitive of the map
 * classes. Other map classes include some
 * implementation of BackgroundMap in their
 * composition, since all maps must have a
 * background.
 */
class BackgroundMap {
public:
	virtual Background::Type getTile(const unsigned int& x, const unsigned int& y) const = 0;
	virtual void setTile(const Background::Type& type, const unsigned int& x, const unsigned int& y) = 0;

	virtual unsigned int getWidth() const = 0;
	virtual unsigned int getHeight() const = 0;
	virtual unsigned int getSize() const = 0;
};

#endif /* BACKGROUND_MAP_H */
