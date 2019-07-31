#pragma once
#include <SFML/Graphics.hpp>
#include "InputComponent.h"

namespace jp
{	

	class Bjron
	{
	public:
		Bjron();
		~Bjron();

		void inputEvents(sf::Event e);
		void update(float dt);
		void draw(sf::RenderWindow& window);		
	private:
		float vx, vy;
		float x, y;
		sf::Sprite _sprite;
		InputComponent* input;
	};

}