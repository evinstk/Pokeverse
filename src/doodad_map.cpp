#include "doodad_map.h"

/***
DoodadMap Constructor
=====================
Creates BackgroundMap filled with default_background type.
Sets compatibility checker.
***/
DoodadMap::DoodadMap(const Background::Type& default_background, const unsigned int& width, const unsigned int& height) {
	_bg_map = makeBackgroundMap(default_background, width, height);
	_compatibility_checker = getCompatibilityChecker();
}

/***
DoodadMap Destructor
====================
Memory is dynamically allocated in the constructor for the _bg_map,
and every AbstractPositionableDoodad is dynamically allocated as
well. All must be freed.
***/
DoodadMap::~DoodadMap() {
	delete _bg_map;
	for (std::vector<AbstractPositionableDoodad*>::iterator it = _doodads.begin(); it != _doodads.end(); ++it) {
		delete *it;
	}
}

/***
Function: setBackgroundTile
===========================
Always succeeds at setting the background tile. If
there's a doodad intersection, it removes the
doodad if incompatile.
***/
void DoodadMap::setBackgroundTile(const Background::Type& type, const unsigned int& x, const unsigned int& y) {
	size_t doodad_index = getDoodadIndex(x, y);
	if (doodad_index != NULL) {
		if (!_compatibility_checker->isCompatible(type, _doodads[doodad_index]->getType())) {
			removeDoodad(doodad_index);
		}
	}
	_bg_map->setTile(type, x, y);
}

Background::Type DoodadMap::getBackgroundTile(const unsigned int& x, const unsigned int& y) const {
	return _bg_map->getTile(x, y);
}

unsigned int DoodadMap::getWidth() const {
	return _bg_map->getWidth();
}

unsigned int DoodadMap::getHeight() const {
	return _bg_map->getHeight();
}

unsigned int DoodadMap::getSize() const {
	return _bg_map->getSize();
}
