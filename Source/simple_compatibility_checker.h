#ifndef SIMPLE_COMPATIBILITY_CHECKER_H
#define SIMPLE_COMPATIBILITY_CHECKER_H

#include "compatibility_checker.h"

/**
 * Class: SimpleCompatibilityChecker
 * =================================
 * Straightforward implementation of
 * CompatibilityChecker. It is, however,
 * inflexible, relying on hard-coded
 * conditional statements to determine
 * compatibility. Changing a condition
 * will require changing source and
 * recompiling. This is particularly
 * problematic if a new doodad or
 * background is introduced.
 * Use this concrete class until the
 * implementation of
 * FlexibileCompatibilityChecker is
 * available. FCC will provide dynamic
 * compatibility checking through
 * composition.
 */
class SimpleCompatibilityChecker: public CompatibilityChecker {
public:
	virtual bool isCompatible(const Background::Type& bg_type, const Doodad::Type& dd_type);
private:
	virtual bool _isFenceCompatible(const Background::Type& bg_type);
	virtual bool _isTreeCompatible(const Background::Type& bg_type);
};

#endif /* SIMPLE_COMPATIBILITY_CHECKER_H */
