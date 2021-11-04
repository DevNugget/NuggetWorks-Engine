#ifndef Game_h
#define Game_h

#define SDL_MAIN_HANDLED
#include "dependencies\sdl2\SDL.h"
#include <iostream>

class Game
{

public:
	Game();
	~Game();

	void init(const char *title, int xpos, int ypos, int width, int height, bool fullscrean);

	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
};

#endif
