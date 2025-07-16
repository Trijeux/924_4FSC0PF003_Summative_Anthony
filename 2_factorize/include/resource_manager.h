#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H
#include <SFML/Graphics/Texture.hpp>

#include "texture_manager.h"


namespace resource_manager
{
	void             Setup();
	sf::Texture&     texture(TextureManager::Texture resource_id);
}

#endif //RESOURCE_MANAGER_H
