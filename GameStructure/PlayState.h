#pragma once
#include <SFML/Graphics.hpp>
#include "State.h"
#include "GameData.h"
#include "Bjron.h"

namespace jp
{
	class PlayState :
		public State
	{
	public:
		PlayState(GameDataRef data);
		~PlayState();

		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;
		sf::Clock _clock;

		sf::Sprite _background;
		sf::Sprite _buttom;

		Bjron* _bjron;
	};
}