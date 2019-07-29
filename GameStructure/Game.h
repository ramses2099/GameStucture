#pragma once

#include <memory>
#include <iostream>
#include <string>
#include <map>
#include <SFML/Graphics.hpp>
#include "StateMachine.h"
#include "AssetManager.h"
#include "InputManager.h"
#include "GameData.h"
#include "SplashState.h"


namespace jp
{
	
	class Game
	{
	public:
		Game(int width, int height, std::string title);
		~Game();
	private:
		const float dt = 1.0f / 60.0f;
		sf::Clock _clock;

		GameDataRef _data = std::make_shared<GameData>();

		void Run();
	};
}
