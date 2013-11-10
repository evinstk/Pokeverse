#ifndef TILE_FACTORY_H
#define TILE_FACTORY_H

#include "itile.h"

class TileFactory {
public:
	virtual ITile* makeTile(ITile::Background background) = 0;
	virtual ITile* makeTile(ITile::Background background, ITile::Doodad doodad) = 0;
};

#endif /* TILE_FACTORY_H */
