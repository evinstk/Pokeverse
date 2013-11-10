#ifndef COMPATIBILITY_CHECKER_H
#define COMPATIBILITY_CHECKER_H

#include "background.h"
#include "doodad.h"

/**
 * Abstract Class: CompatibilityChecker
 * ====================================
 * Anticipating the demand of several kinds
 * of clients, compatibility functionality
 * between two types of objects has been
 * separately encapsulated. Demand may also
 * require certain couples to change.
 */
class CompatibilityChecker {
public:
	virtual bool isCompatible(const Background::Type& bg_type, const Doodad::Type& dd_type) = 0;
};

#endif /* COMPATIBILITY_CHECKER_H */