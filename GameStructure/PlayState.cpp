#include "pch.h"
#include "PlayState.h"


jp::PlayState::PlayState(GameDataRef data) :_data(data)
{
}

jp::PlayState::~PlayState()
{
}

void jp::PlayState::Init()
{
	_data->assets.LoadTexture("bg", MAIN_MENU_BACKGROUND_FILEPATH);
	_background.setTexture(_data->assets.GetTexture("bg"));
	_background.setPosition(sf::Vector2f(0.f, 0.f));

	_data->assets.LoadTexture("buttomPlay", PLAY_BUTTON_BACKGROUND_FILEPATH);
	_buttom.setTexture(_data->assets.GetTexture("buttomPlay"));
	_buttom.setPosition(((SCREEN_WIDTH / 2) - (_buttom.getGlobalBounds().width / 2)),
		((SCREEN_HEIGHT / 2) - (_buttom.getGlobalBounds().height)));

	_bjron = new Bjron();

}

void jp::PlayState::HandleInput()
{
	sf::Event event;

	while (_data->window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type)
		{
			_data->window.close();
		}
		
		//input
		_bjron->inputEvents(event);
	}
}

void jp::PlayState::Update(float dt)
{
	_bjron->update(dt);
}

void jp::PlayState::Draw(float dt)
{
	_data->window.clear();
	_data->window.draw(_background);
	_data->window.draw(_buttom);


	_bjron->draw(_data->window);
	_data->window.display();
}

