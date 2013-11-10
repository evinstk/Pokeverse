#ifndef DOODAD_MAP_H
#define DOODAD_MAP_H

#include "abstract_doodad_map.h"
#include "abstract_positionable_doodad.h"
#include "background_map.h"
#include "compatibility_checker.h"
#include <vector>

/***
Abstract Class: DoodadMap
Implements: AbstractDoodadMap
=========================
DoodadMap manages doodads on a background map,
depending on a CompatibilityChecker to check
doodads against tiles. DoodadMap represents
doodads on an array of equal size as the
background map. It may be space inefficient,
but it is certainly time efficient.
Override factory methods for concrete class.
***/
class DoodadMap: public AbstractDoodadMap {
public:
	/* Constructors */
	DoodadMap(const Background::Type& default_background, const unsigned int& width, const unsigned int& height);
	~DoodadMap();

	/* Factories for dependency abstractions. Subclass for implementations. */
	virtual AbstractPositionableDoodad* makePositionableDoodad(const Doodad::Type& type) = 0;
	virtual BackgroundMap* makeBackgroundMap(const Background::Type& default_background, const unsigned int& width, const unsigned int& height) = 0;
	virtual CompatibilityChecker* getCompatibilityChecker() = 0;

	/* DoodadMap specific responsibilities */
	void setBackgroundTile(const Background::Type& type, const unsigned int& x, const unsigned int& y);
	int addDoodad(const Doodad::Type& type, const unsigned int& x, const unsigned int& y);
	int getDoodadIndex(const unsigned int& x, const unsigned int& y) const;
	bool removeDoodad(const int& index);

	/* Delegated responsibilities */
	Background::Type getBackgroundTile(const unsigned int& x, const unsigned int& y) const;
	unsigned int getWidth() const;
	unsigned int getHeight() const;
	unsigned int getSize() const;
private:
	std::vector<AbstractPositionableDoodad*> _doodads;
	BackgroundMap* _bg_map;
	CompatibilityChecker* _compatibility_checker;


};

#endif /* DOODAD_MAP_H */
