#include "Hero.h"
#include <iostream>


Hero::Hero(sf::Vector2f position) : _position(position)
{
	_shape.setSize(sf::Vector2f(20.f, 20.f));
	_shape.setFillColor(sf::Color::Red);
	_shape.setPosition(_position);
	//if (/*!_texture.loadFromFile("texture")*/ !_texture.create(20, 20)) {
		//std::cout << "Error loading texture!\n";
	//}
//	_texture.setSmooth(true);

	//_sprite.setTexture(_texture);
	
}

void Hero::move(int x, int y)
{
	_position.x += x;
	_position.y += y;

	_shape.setPosition(_position);
}

void Hero::render(sf::RenderWindow &window)
{
	window.draw(_shape);
}


void Hero::update()
{

}

Hero::~Hero()
{
}
