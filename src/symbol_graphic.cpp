#include "symbol_graphic.h"

//SymbolGraphic::SymbolGraphic(const ISymbol::SymbolType& symbol_type) {
//	_symbol = ISymbol::makeSymbol(symbol_type);
//	_geometry = 0; //change
//}

//SymbolGraphic::~SymbolGraphic() {
//	delete _symbol;
//	delete _geometry;
//}

void SymbolGraphic::draw(const int& x_offset, const int& y_offset, IGL_Surface* dest) {
	int x = _geometry->getX() + x_offset;
	int y = _geometry->getY() + y_offset;
	_symbol->draw(x, y, dest);
}
