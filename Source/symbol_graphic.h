#ifndef SYMBOL_GRAPHIC_H
#define SYMBOL_GRAPHIC_H

#include "igraphic.h"
#include "isymbol.h"
#include "igl_rect.h"

class SymbolGraphic: public IGraphic {
public:
	//SymbolGraphic(const ISymbol::SymbolType& symbol_type);
	//~SymbolGraphic();
	virtual void draw(const int& x_offset, const int& y_offset, IGL_Surface* dest);
private:
	ISymbol* _symbol;
	IGL_Rect* _geometry;
};

#endif /* SYMBOL_GRAPHIC_H */
