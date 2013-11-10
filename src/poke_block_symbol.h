#ifndef IPOKE_SYMBOL_H
#define IPOKE_SYMBOL_H

#include "block_symbol.h"

/**
 * Interface: PokeBlockSymbol
 * ======================
 * Concrete classes implementing IPokeSymbol should
 * draw be able to draw at least one of the symbols
 * enumerated within the interface. Because IPokeSymbol
 * is derived from the BlockSymbol base class, the behavior
 * of draw() here is identical to that in BlockSymbol and
 * as expected in ISymbol.
 */
class PokeBlockSymbol: public BlockSymbol {
public:
	enum SymbolType {
		GrassSymbol
	};
	virtual void draw(const int& x_offset, const int& y_offset, IGL_Surface* destination);
};

#endif /* IPOKE_SYMBOL_H */
