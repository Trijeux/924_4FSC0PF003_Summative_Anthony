#include "font_manager.h"

#include <iostream>

void FontManager::Setup()
{
	LoadAllFont();
}

sf::Font& FontManager::font(Font resource_id)
{
	if(static_cast<int>(resource_id) < fonts_.size())
	{
		return fonts_.at(static_cast<int>(resource_id));
	}
	return blank_font_;
}

void FontManager::LoadAllFont()
{
	blank_font_ = sf::Font();

	for(int i = 0; i < fonts_.size(); i++)
	{
		if(!fonts_.at(i).openFromFile(path_splats + names_font_.at(i) + ".ttf"))
		{
			if(!fonts_.at(i).openFromFile(path_splats + names_font_.at(i) + ".TTF"))
			{
				std::cout << "Error loading " + names_font_.at(i) + " font " << std::endl;
			}
		}
	}
}