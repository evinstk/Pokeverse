#include "doodad_tile.h"

DoodadTile::DoodadTile(Background background):
	SimpleTile(background),
	_doodad(NoDoodad) {}

bool DoodadTile::isWalkable() {
	if (!SimpleTile::isWalkable()) return false;
	return _isWalkableDoodad();
}

/**
 * DoodadTile::_isWalkableDoodad()
 * ===============================
 * Returns evaluation of logical OR connected
 * statements checking _doodad against walkable
 * doodads enumerated in ITile. Since most, if
 * not all, doodads are unwalkable, the
 * statement should be fairly short, if any
 * statement at all.
 */
bool DoodadTile::_isWalkableDoodad() {
	return false;
}

/**
 * DoodadTile::setDoodad()
 * =======================
 * Sets the doodad of the tile. Returns false if
 * the setting was unsuccessful in the event of
 * incompatible doodad and background (i.e., tree
 * on water), otherwise returns true upon sucessful
 * setting.
 */
bool DoodadTile::setDoodad(ITile::Doodad doodad) {
	if (!_isCompatible(doodad)) return false;
	_doodad = doodad;
	return true;
}

bool DoodadTile::_isCompatible(ITile::Doodad doodad) {
	if (doodad == NoDoodad) return true;
	if (doodad == TreeDoodad) return _isTreeCompatible(doodad);
	return false;
}

bool DoodadTile::_isTreeCompatible(ITile::Doodad doodad) {
	Background background = getBackground();
	return ((background == GrassBackground) ||
		(background == DirtBackground));
}
