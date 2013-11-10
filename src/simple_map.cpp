#include "simple_map.h"

SimpleMap::SimpleMap(const int& width, const int& height, const ITile::Background& default_background):
	_WIDTH(width),
	_HEIGHT(height),
	_SIZE(width * height) {
		_tiles = new ITile* [_SIZE];
		for (size_t i = 0; i < _SIZE; i++) {
			//Create tiles through a factory
		}
}
