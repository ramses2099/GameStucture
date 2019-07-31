#include "pch.h"
#include "MainMenuState.h"
#include "PlayState.h"
#include <iostream>

jp::MainMenuState::MainMenuState(GameDataRef data) :_data(data)
{
}

jp::MainMenuState::~MainMenuState()
{
}

void jp::MainMenuState::Init()
{
	_data->assets.LoadTexture("bg", MAIN_MENU_BACKGROUND_FILEPATH);
	_background.setTexture(_data->assets.GetTexture("bg"));
	_background.setPosition(sf::Vector2f(0.f, 0.f));

	_data->assets.LoadTexture("buttomPlay", PLAY_BUTTON_BACKGROUND_FILEPATH);
	_buttom.setTexture(_data->assets.GetTexture("buttomPlay"));
	_buttom.setPosition(((SCREEN_WIDTH / 2) - (_buttom.getGlobalBounds().width / 2)),
		((SCREEN_HEIGHT / 2) - (_buttom.getGlobalBounds().height)));



}

void jp::MainMenuState::HandleInput()
{
	sf::Event event;

	while (_data->window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type)
		{
			_data->window.close();
		}

		if (_data->input.IsSpriteClicked(_buttom, sf::Mouse::Left, _data->window))
		{
			_data->machine.AddState(StateRef(new PlayState(this->_data)));
			
		}

	}
}

void jp::MainMenuState::Update(float dt)
{
}

void jp::MainMenuState::Draw(float dt)
{
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_buttom);
	_data->window.display();
}
