#include "basic_symbol.h"

//ISymbol *ISymbol::makeSymbol(ISymbol::SymbolType symbol_type) {
//	return new BlockSymbol(symbol_type);
//}

void BasicSymbol::draw(const int& x_offset, const int& y_offset, IGL_Surface* dest) {
	dest->paintOn(x_offset, y_offset, _src, _clip);
}

//BlockSymbol::BlockSymbol(const ISymbol::SymbolType& symbol_type) {
//	//Needs to be implemented
//}
//
//BlockSymbol::~BlockSymbol() {
//	delete _src;
//	delete _clip;
//}
