#ifndef DOODAD_H
#define DOODAD_H

/**
 * Abstract Class: Doodad
 * ======================
 * Doodad objects are bare. Doodads only
 * know of their own width and height.
 * Conspicuously absent is any knowlege
 * of compatibility with certain background
 * tiles. Since that is both subject to
 * change and an additional responsibility,
 * it is encapsulated elsewhere.
 */
class Doodad {
public:
	enum Type {
		NoDoodad, Tree, Fence
	};
	virtual Doodad::Type getType() const = 0;
	virtual unsigned int getW() const = 0;
	virtual unsigned int getH() const = 0;
	//bool isCompatibleAt(const unsigned int& x, const unsigned int& y) const;
	//static Doodad* makeDoodad(Doodad::Type type);
};

#endif /* DOODAD_H */
