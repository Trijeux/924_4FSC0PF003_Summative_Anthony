#include "texture_manager.h"

namespace resource_manager
{
	namespace
	{
		TextureManager resource_sprit;
	}

	void Setup()
	{
		resource_sprit.Setup();
	}

	sf::Texture& texture(const TextureManager::Texture resource_id)
	{
		return resource_sprit.texture(resource_id);
	}
}
