#include "pch.h"
#include "SplashState.h"
#include "MainMenuState.h"

jp::SplashState::SplashState(GameDataRef data):_data(data)
{

}

jp::SplashState::~SplashState()
{
}

void jp::SplashState::Init()
{
	_data->assets.LoadTexture("bgSplash", SPLASH_SCENE_BACKGROUND_FILEPATH);
	_background.setTexture(_data->assets.GetTexture("bgSplash"));
	
	_background.setPosition(sf::Vector2f(0.f, 0.f));

}

void jp::SplashState::HandleInput()
{
	sf::Event event;

	while (_data->window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type) 
		{
			_data->window.close();
		}	

	}

}

void jp::SplashState::Update(float dt)
{
	if (_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME) 
	{
		_data->machine.AddState(StateRef(new MainMenuState(this->_data)));

	}
}

void jp::SplashState::Draw(float dt)
{
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.display();
}
