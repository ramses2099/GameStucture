#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"

namespace jp {
	class SpriteComponent:
		public Component
	{
	public:
		SpriteComponent();
		~SpriteComponent();

		void draw(GameObject& gameObject, sf::RenderWindow &window)override;
	};
}
