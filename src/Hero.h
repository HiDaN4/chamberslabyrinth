#pragma once

#include <SFML\Graphics.hpp>

class Hero
{
private:
	sf::RectangleShape _shape;
	sf::Texture _texture;
	sf::Sprite _sprite;
	sf::Vector2f _position;

public:
	Hero(sf::Vector2f);
	~Hero();

	void render(sf::RenderWindow&);
	void move(int x, int y);
	void update();
};

