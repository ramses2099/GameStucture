#include "pch.h"
#include "AssetManager.h"

jp::AssetManager::AssetManager()
{
}

jp::AssetManager::~AssetManager()
{
}

void jp::AssetManager::LoadTexture(std::string name, std::string fileName)
{
	sf::Texture tex;
	if (tex.loadFromFile(fileName))
		this->_textures[name] = tex;
}

sf::Texture & jp::AssetManager::GetTexture(std::string name)
{
	return this->_textures.at(name);
}

void jp::AssetManager::LoadFont(std::string name, std::string fileName)
{
	sf::Font fon;
	if (fon.loadFromFile(fileName))
		this->_fonts[name] = fon;

}

sf::Font & jp::AssetManager::GetFont(std::string name)
{
	return this->_fonts.at(name);
}
