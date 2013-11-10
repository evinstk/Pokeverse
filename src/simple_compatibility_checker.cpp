#include "simple_compatibility_checker.h"

bool SimpleCompatibilityChecker::isCompatible(const Background::Type& bg_type,
											  const Doodad::Type& dd_type) {
	switch (dd_type) {
	case Doodad::NoDoodad: return true;
	case Doodad::Fence: return _isFenceCompatible(bg_type);
	case Doodad::Tree: return _isTreeCompatible(bg_type);
	}
	return false;
}

bool SimpleCompatibilityChecker::_isFenceCompatible(const Background::Type& bg_type) {
	return ((bg_type == Background::Dirt) ||
		(bg_type == Background::Grass));
}

bool SimpleCompatibilityChecker::_isTreeCompatible(const Background::Type& bg_type) {
	return ((bg_type == Background::Dirt) ||
		(bg_type == Background::Grass));
}
