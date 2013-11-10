#ifndef SIMPLE_MAP_H
#define SIMPLE_MAP_H

#include "imap.h"

class SimpleMap: public IMap {
public:
	SimpleMap(const int& width, const int& height, const ITile::Background& default_background = ITile::GrassBackground);
	~SimpleMap();
	virtual ITile* getTile(const int& x_pos, const int& y_pos);
	virtual void setTile(const int& x_pos, const int& y_pos, const ITile& tile);
private:
	const int _WIDTH;
	const int _HEIGHT;
	const int _SIZE;
	ITile** _tiles;
};

#endif /* SIMPLE_MAP_H */
