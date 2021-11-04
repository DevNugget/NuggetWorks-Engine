#include <headers/Game.h>

Game *game = nullptr;

int main(int argc, const char *argv[])
{
	game = new Game();

	game->init("NuggetWorks Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	// Game loop
	while (game->running())
	{

		game->handleEvents();
		game->update();
		game->render();
	}

	// Cleaning from memory
	game->clean();

	return 0;
}
