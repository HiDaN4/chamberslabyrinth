#pragma once

#include <SFML\Graphics.hpp>
#include "Hero.h"

class Game
{
private:
	sf::RenderWindow window;
	sf::RectangleShape shape;

	Hero hero;

public:
	Game();
	void eventHandler();
	~Game();
};

