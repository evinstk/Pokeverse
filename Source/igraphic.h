#ifndef IGRAPHIC_H
#define IGRAPHIC_H

#include "igl_surface.h"

/**
 * Interface: IGraphic
 * ===================
 * Concrete classes of the IGraphic interface
 * are responsible for knowing the geographical
 * and geometrical aspects of the item to be
 * rendered.
 * The parameters x_offset and y _offset here
 * should not indicate the absolute position on
 * the screen but rather the shift that the
 * graphic's position should take relative to
 * its internal geography.
 */
class IGraphic {
	virtual void draw(const int& x_offset, const int& y_offset, IGL_Surface* dest) = 0;
};

#endif /* IGRAPHIC_H */
