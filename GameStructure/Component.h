#pragma once
#include <SFML/Graphics.hpp>


namespace jp
{
	class GameObject;
	class Component {
	public:		
		virtual void init() {};
		virtual void update(GameObject& gameObject, float dt) {};
		virtual void input(GameObject& gameObject, sf::Event event) {};
		virtual void draw(GameObject& gameObject, sf::RenderWindow& window) {};

		virtual ~Component() {};

	};
	   	  
}