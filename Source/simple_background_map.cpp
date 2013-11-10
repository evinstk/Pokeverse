#include "simple_background_map.h"

using namespace std;

SimpleBackgroundMap::SimpleBackgroundMap(const Background::Type& default_bg_type, const unsigned int& width, const unsigned int& height):
	_WIDTH (width),
	_HEIGHT (height),
	_SIZE (width * height) {
		_tiles = new Background::Type [_SIZE];
}

SimpleBackgroundMap::~SimpleBackgroundMap() {
	delete [] _tiles;
}

Background::Type SimpleBackgroundMap::getTile(const unsigned int& x, const unsigned int& y) const {
	int index = _coordsToIndex(x, y);
	if (_isInRange(index)) return _tiles[index];
	return Background::NoBackground;
}

void SimpleBackgroundMap::setTile(const Background::Type& type,
								  const unsigned int& x,
								  const unsigned int& y) {
	int index = _coordsToIndex(x, y);
	_tiles[index] = type;
}

int SimpleBackgroundMap::_coordsToIndex(const int& x, const int& y) const {
	return (x * _WIDTH) + y;
}

bool SimpleBackgroundMap::_isInRange(int index) const {
	return ((index >= 0) && (index < _SIZE));
}

unsigned int SimpleBackgroundMap::getWidth() const {
	return _WIDTH;
}

unsigned int SimpleBackgroundMap::getHeight() const {
	return _HEIGHT;
}

unsigned int SimpleBackgroundMap::getSize() const {
	return _SIZE;
}
