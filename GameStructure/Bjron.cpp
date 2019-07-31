#include "pch.h"
#include "Bjron.h"

jp::Bjron::Bjron() 
{
	this->vx = 0.f;
	this->vy = 0.f;
	this->x = 0.f;
	this->y = 0.f;
	this->input = new InputComponent();
}

jp::Bjron::~Bjron()
{
}

void jp::Bjron::inputEvents(sf::Event e)
{
	//input->inputEvents(*this, e);
}

void jp::Bjron::update(float dt)
{
}

void jp::Bjron::draw(sf::RenderWindow & window)
{
}
