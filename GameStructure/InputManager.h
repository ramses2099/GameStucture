#pragma once

#include <SFML/Graphics.hpp>

namespace jp
{

	class InputManager
	{
	public:
		InputManager();
		~InputManager();

		bool IsSpriteClicked(sf::Sprite objct, sf::Mouse::Button button, sf::RenderWindow &window);
		sf::Vector2i GetMousePosition(sf::RenderWindow &window);



	};

}