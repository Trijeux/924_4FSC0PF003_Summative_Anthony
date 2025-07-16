#include "font_manager.h"
#include "texture_manager.h"

namespace resource_manager
{
	namespace
	{
		TextureManager resource_sprit;
		FontManager resource_font;
	}

	void Setup()
	{
		resource_sprit.Setup();
		resource_font.Setup();
	}

	sf::Font& font(const FontManager::Font resource_id)
	{
		return resource_font.font(resource_id);
	}

	sf::Texture& texture(const TextureManager::Texture resource_id)
	{
		return resource_sprit.texture(resource_id);
	}
}
