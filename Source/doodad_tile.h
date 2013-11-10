#ifndef DOODAD_TILE_H
#define DOODAD_TILE_H

#include "simple_tile.h"

class DoodadTile: public SimpleTile {
	DoodadTile(Background background);
	virtual bool isWalkable();
	bool setDoodad(Doodad doodad);
private:
	Doodad _doodad;
	bool _isCompatible(Doodad doodad);
	bool _isTreeCompatible(Doodad doodad);
	bool _isWalkableDoodad();
};

#endif /* DOODAD_TILE_H */
