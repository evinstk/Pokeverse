#include "simple_tile.h"

SimpleTile::SimpleTile(Background background):
	_background(background) {}

/**
 * SimpleTile::isWalkable()
 * ========================
 * isWalkable() is implemented by checking if
 * _background is equivalent to all walkable
 * tiles enumerated in ITile.
 */
bool SimpleTile::isWalkable() {
	return ((_background == GrassBackground) ||
		(_background == DirtBackground));
}

ITile::Background SimpleTile::getBackground() {
	return _background;
}

//ITile::Doodad SimpleTile::getDoodad() {
//	return NoDoodad;
//}
