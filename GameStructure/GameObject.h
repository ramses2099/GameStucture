#pragma once
#include <SFML/Graphics.hpp>
#include "InputComponent.h"
#include "SpriteComponent.h"
#include "TransformComponent.h"

#include "ComponentManager.h"

namespace jp
{
	class GameObject {
	public:
		GameObject(TransformComponent* trans,
			SpriteComponent* sprite, InputComponent* inp) :transform(trans),
			sprite(sprite), inp(inp)
		{
			++id;
			init();
		}
		//
		~GameObject()
		{


		}
		//
		GameObject* createObject() 
		{
			return new GameObject(new TransformComponent(), 
				new SpriteComponent(),
				new InputComponent());
		}		
		//
		void init()
		{


		}
		//
		void update(float dt)
		{
			this->transform->update(*this, dt);
		}
		//
		void input(sf::Event event)
		{
			this->inp->input(*this, event);
		}
		//
		void draw(sf::RenderWindow& window)
		{
			this->sprite->draw(*this, window);
		}
	private:
		long id;

		TransformComponent* transform;
		SpriteComponent* sprite;
		InputComponent* inp;

	};

}