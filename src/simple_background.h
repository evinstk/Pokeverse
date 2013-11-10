#ifndef SIMPLE_BACKGROUND_H
#define SIMPLE_BACKGROUND_H

#include "background.h"

class SimpleBackground: public Background {
public:
	BG_Type getBackgroundType();
	void setType(BG_Type type);
private:
	BG_Type _type;
};

#endif /* SIMPLE_BACKGROUND_H */
