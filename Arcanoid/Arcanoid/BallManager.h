#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <list>

class Game;
class Ball;

class BallManager
{
public:
	BallManager(Game* ga);
	~BallManager() = default;
	void update(float DeltaTime);
	void respawnBall();
	void clearList();
private:
	mutable std::list<Ball> ballList;
	Game* game;
};

