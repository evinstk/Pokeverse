#ifndef ITILE_H
#define ITILE_H

/**
 * Interface: ITile
 * ================
 * Implementations of ITile must be
 * instantiated with an enumerated
 * background and be able to determine
 * whether it is walkable or not.
 * Doodads are optional but affect the
 * behavior of isWalkable().
 */
class ITile {
public:
	enum Background {
		GrassBackground, DirtBackground
	};
	enum Doodad {
		NoDoodad, TreeDoodad
	};
	virtual bool isWalkable() = 0;
	virtual Background getBackground() = 0;
	//virtual Doodad getDoodad() = 0;
};

#endif /* ITILE_H */
