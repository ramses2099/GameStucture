#pragma once
#include <SFML/Graphics.hpp>
#include "Component.h"


namespace jp
{
	
	class InputComponent :
		public Component
	{
	public:
		InputComponent();
		~InputComponent();

		void input(GameObject& gameObject, sf::Event e)override;

	private:
		const float WALK_ACCELERATION = 1.f;
	};

}