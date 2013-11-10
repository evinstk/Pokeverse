#ifndef IMAP_H
#define IMAP_H

#include "itile.h"

class IMap {
public:
	virtual ITile* getTile(const int& x_pos, const int& y_pos) = 0;
	virtual void setTile(const int& x_pos, const int& y_pos, const ITile& tile) = 0;
};

#endif /* IMAP_H */
