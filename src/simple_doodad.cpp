#include "simple_doodad.h"

Doodad::Type SimpleDoodad::getType() const {
	return _type;
}

unsigned int SimpleDoodad::getW() const {
	return _width;
}

unsigned int SimpleDoodad::getH() const {
	return _height;
}

Doodad* SimpleDoodad::makeDoodad(Doodad::Type type) {
	switch (type) {
	case Doodad::Tree: return _makeTree();
	case Doodad::Fence: return _makeFence();
	}
	return _makeNoDoodad();
}

SimpleDoodad::SimpleDoodad(const Doodad::Type& type, const unsigned int& width, const unsigned int& height):
	_type(type),
	_width(width),
	_height(height) {
}

Doodad* SimpleDoodad::_makeNoDoodad() {
	return new SimpleDoodad(Doodad::NoDoodad, 0, 0);
}

Doodad* SimpleDoodad::_makeTree() {
	return new SimpleDoodad(Doodad::Tree, 1, 1);
}

Doodad* SimpleDoodad::_makeFence() {
	return new SimpleDoodad(Doodad::Fence, 1, 1);
}
