#ifndef BACKGROUND_H
#define BACKGROUND_H

struct Background {
	enum Type {
		NoBackground, Grass, Dirt
	};
};

///**
// * Abstract Class: Background
// * ==========================
// * Background enumerates the types of
// * backgrounds. The class is primitive
// * and adhering to the open-close
// * principle would be overly complex.
// * If a new background is needed, simply
// * add it to the enumerated list.
// */
//class Background {
//public:
//	enum BG_Type {
//		Grass, Dirt
//	};
//	virtual BG_Type getBackgroundType() = 0;
//	virtual void setType(BG_Type type) = 0;
//};

#endif /* BACKGROUND_H */
