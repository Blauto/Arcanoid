#include <cstdlib>
#include "Game.h"


using namespace std;

int main()
{
	srand(time(NULL));

	Game game;

	game.run();

	return 0;
}