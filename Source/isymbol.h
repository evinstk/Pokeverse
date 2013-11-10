#ifndef ISYMBOL_H
#define ISYMBOL_H

#include "igl_surface.h"

/**
 * Interface: ISymbol
 * ==================
 * Concrete classes implementing ISymbol should
 * be able to draw an internal representation
 * onto a passed surface at the passed x and y
 * offsets.
 */
class ISymbol {
public:
	//enum SymbolType {
	//	GrassSymbol
	//};
	//static ISymbol* makeSymbol(SymbolType symbol_type);
	virtual void draw(const int& x_offset, const int& y_offset, IGL_Surface* destination) = 0;
};

#endif /* SYMBOL_H */
