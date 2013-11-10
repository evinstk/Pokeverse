#ifndef FLEXIBLE_COMPATIBILITY_CHECKER_H
#define FLEXIBLE_COMPATIBILITY_CHECKER_H

#include "compatibility_checker.h"
#include <vector>
#include <map>

/**
 * Class: FlexibleCompatibilityChecker
 * ===================================
 * Relies on composition to dynamically set
 * compatibility at run-time.
 */
class FlexibleCompatibilityChecker: public CompatibilityChecker {
public:
	bool isCompatible(const Background::Type& bg_type, const Doodad::Type& dd_type) const;
private:
	std::map<Doodad::Type, std::vector<Background::Type> > _compatibles;
};

#endif /* FLEXIBLE_COMPATIBILITY_CHECKER_H */
