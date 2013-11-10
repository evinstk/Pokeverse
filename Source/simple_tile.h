#ifndef SIMPLE_TILE_H
#define SIMPLE_TILE_H

#include "itile.h"

/**
 * Class: SimpleTile
 * =================
 * SimpleTile is a tile with a background only.
 * The derivative DoodadTile contains additional
 * functionality for tiles with doodads. Since
 * all tiles require backgrounds, SimpleTile is
 * the base class.
 */
class SimpleTile: public ITile {
public:
	SimpleTile(Background background);
	virtual bool isWalkable();
	Background getBackground();
	//virtual Doodad getDoodad();
private:
	Background _background;
};

#endif /* SIMPLE_TILE_H */
