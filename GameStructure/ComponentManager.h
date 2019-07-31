#pragma once

#include <iostream>
#include <map>
#include "Component.h"

namespace jp
{
	
	class ComponentManager
	{
	public:
		ComponentManager();
		~ComponentManager();

		void AddComponent(std::string name, Component component);
		Component &GetComponent(std::string name);

	private:
		std::map<std::string, Component> _components;

	};

}