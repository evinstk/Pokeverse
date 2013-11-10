#ifndef SIMPLE_DOODAD_H
#define SIMPLE_DOODAD_H

#include "doodad.h"

/**
 * Class: Doodad
 * =============
 * makeDoodad() is a factory method that
 * returns a Doodad implementing object of
 * the parameterized type. Avoid subclassing:
 * these types should return constants with
 * no additional functionality, rendering
 * subclassing unnecessary.
 */
class SimpleDoodad: public Doodad {
public:
	Doodad::Type getType() const;
	unsigned int getW() const;
	unsigned int getH() const;
	static Doodad* makeDoodad(Doodad::Type type);
private:
	/* Doodads are constructed with invariable specifications
	 * The constructor needs to be private. Clients perform
	 * object construction with the makeDoodad() factory method*/
	SimpleDoodad(const Doodad::Type& type, const unsigned int& width, const unsigned int& height);
	const Doodad::Type _type;
	const unsigned int _width;
	const unsigned int _height;

	/* Factory methods for the various doodads */
	static Doodad* _makeNoDoodad();
	static Doodad* _makeTree();
	static Doodad* _makeFence();
};

#endif /* SIMPLE_DOODAD_H */
