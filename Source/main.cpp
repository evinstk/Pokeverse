#include "simple_background_map.h"
#include "SDL/SDL.h"

int main(int argc, char *args[]) {
	SimpleBackgroundMap(Background::Grass, 250, 250);
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Quit();
	return 0;
}
