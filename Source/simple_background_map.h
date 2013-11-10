#ifndef SIMPLE_BACKGROUND_MAP_H
#define SIMPLE_BACKGROUND_MAP_H

#include "background_map.h"

/**
 * Class: SimpleBackgroundMap
 * ==========================
 * This is a straightforward implementation of
 * BackgroundMap, if not very efficient. All
 * tiles have their own entry in the _tiles
 * variable.
 * A possible space-saving implementation might
 * make use of repeated tiles, grouping type
 * identical adjacent tiles in a rectangle
 * represented by a small data structure.
 */
class SimpleBackgroundMap: public BackgroundMap {
public:
	SimpleBackgroundMap(const Background::Type& default_bg_type, const unsigned int& width, const unsigned int& height);
	~SimpleBackgroundMap();
	Background::Type getTile(const unsigned int& x, const unsigned int& y) const;
	void setTile(const Background::Type& type, const unsigned int& x, const unsigned int& y);

	unsigned int getWidth() const;
	unsigned int getHeight() const;
	unsigned int getSize() const;
private:
	const unsigned int _WIDTH;
	const unsigned int _HEIGHT;
	const int _SIZE;
	Background::Type* _tiles;

	int _coordsToIndex(const int& x, const int& y) const;
	bool _isInRange(int index) const;
};

#endif /* SIMPLE_BACKGROUND_MAP_H */
