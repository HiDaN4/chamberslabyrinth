#include "Game.h"


Game::Game() : hero(sf::Vector2f(420.f, 420.f)) 
{
	window.create(sf::VideoMode(1280, 720), "Game");
	shape.setSize(sf::Vector2f(420.f, 420.f));

	shape.setFillColor(sf::Color::Cyan);
	shape.setOrigin(210.f, 210.f);
	shape.setPosition(640.f, 400.f);
}


void Game::eventHandler()
{
	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Escape)
					window.close();

				if (event.key.code == sf::Keyboard::Right)
					hero.move(15, 0);

				if (event.key.code == sf::Keyboard::Left)
					hero.move(-15, 0);

				if (event.key.code == sf::Keyboard::Up)
					hero.move(0, -15);

				if (event.key.code == sf::Keyboard::Down)
					hero.move(0, 15);
			}
		}

		window.clear();
		window.draw(shape);
		hero.render(window);
		window.display();
	}
}


Game::~Game()
{
}
