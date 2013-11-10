#ifndef IGL_SURFACE_H
#define IGL_SURFACE_H

#include "igl_rect.h"

class IGL_Surface {
public:
	virtual void paintOn(const int& x_offset, const int& y_offset, IGL_Surface* src, const IGL_Rect* clip = 0) = 0;
};

#endif /* IGL_SURFACE_H */
