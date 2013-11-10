#ifndef IGL_RECT_H
#define IGL_RECT_H

class IGL_Rect {
public:
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual int getW() = 0;
	virtual int getH() = 0;
};

#endif /* IGL_RECT_H */