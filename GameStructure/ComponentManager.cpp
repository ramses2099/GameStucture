#include "pch.h"
#include "ComponentManager.h"

jp::ComponentManager::ComponentManager()
{
}
//
jp::ComponentManager::~ComponentManager()
{
}
//
void jp::ComponentManager::AddComponent(std::string name, Component component)
{
this->_components[name] = component;
}
//
jp::Component & jp::ComponentManager::GetComponent(std::string name)
{
	return this->_components.at(name);
}
