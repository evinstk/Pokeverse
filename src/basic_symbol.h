#ifndef BASIC_SYMBOL_H
#define BASIC_SYMBOL_H

#include "isymbol.h"
#include "igl_surface.h"
#include "igl_rect.h"

class BasicSymbol: public ISymbol {
public:
	BasicSymbol(IGL_Surface* src, IGL_Rect* clip);
	virtual void draw(const int& x_offset, const int& y_offset, IGL_Surface* dest);
	//BlockSymbol(const ISymbol::SymbolType& symbol_type);
	//~BlockSymbol();
private:
	IGL_Surface* _src;
	IGL_Rect* _clip;
};

//class TileSymbol: public BlockSymbol {
//public:
//	TileSymbol();
//};

#endif /* BASIC_SYMBOL_H */
