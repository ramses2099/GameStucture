#include "pch.h"
#include "InputComponent.h"
#include "Bjron.h"


jp::InputComponent::InputComponent()
{
	
}

jp::InputComponent::~InputComponent()
{

}

void jp::InputComponent::input(GameObject & gameObject, sf::Event e) 
{
	if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Left)
	{

	}
	else if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Right)
	{

	}
	else if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Up)
	{

	}
	else if (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Down)
	{

	}

}
