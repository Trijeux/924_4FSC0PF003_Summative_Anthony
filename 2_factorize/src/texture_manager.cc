#include "texture_manager.h"

#include <iostream>
#include <SFML/Graphics/Texture.hpp>

void TextureManager::Setup()
{
	LoadAllTextures();
}

sf::Texture& TextureManager::texture(Texture resource_id)
{
	if(static_cast<int>(resource_id) < textures_.size())
	{
		return textures_.at(static_cast<int>(resource_id));
	}
	return blank_texture_;
}

void TextureManager::LoadAllTextures()
{
	blank_texture_ = sf::Texture();

	for(int i = 0; i < textures_.size(); i++)
	{
			if(!textures_.at(i).loadFromFile(path_splats + names_textures_.at(i) + ".png")) std::cout << "Error loading " + names_textures_.at(i) + " texture " << std::endl;
	}
}
