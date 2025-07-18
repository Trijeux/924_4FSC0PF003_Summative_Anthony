﻿#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include <array>
#include <SFML/Graphics/Texture.hpp>

class TextureManager
{
public:
	//Nom donner pour l'enume pour appler dans le code la texture
	enum class Texture
	{
		kTest00, kSplat01, kSplat02, kSplat03, kSplat04, kSplat05,
		kSplat06, kSplat07, kSplat08, kSplat09, kSplat10, kSplat11,
		kSplat12, kSplat13, kSplat14, kSplat15, kSplat16, kSplat17,
		kSplat18, kSplat19, kSplat20, kSplat21, kSplat22, kSplat23,
		kSplat24, kSplat25, kSplat26, kSplat27, kSplat28, kSplat29,
		kSplat30, kSplat31, kSplat32, kSplat33, kSplat34, kSplat35,
		kIndustrialTile00,kIndustrialTile01,kIndustrialTile02,kIndustrialTile03,
		kIndustrialTile04,kIndustrialTile05,kIndustrialTile06,kIndustrialTile07,
		kIndustrialTile08,kIndustrialTile09,kIndustrialTile10, kMax
	};

	void Setup();

	sf::Texture& texture(Texture resource_id);

protected:
private:
	//Nom donner pour appler dans le dossier (que des .png)
	const std::array<std::string, static_cast<int>(Texture::kMax)> names_textures_
	{
		"test00", "splat01", "splat02", "splat03", "splat04", "splat05",
		"splat06", "splat07", "splat08", "splat09", "splat10", "splat11",
		"splat12", "splat13", "splat14", "splat15", "splat16", "splat17",
		"splat18", "splat19", "splat20", "splat21", "splat22", "splat23",
		"splat24", "splat25", "splat26", "splat27", "splat28", "splat29",
		"splat30", "splat31", "splat32", "splat33", "splat34", "splat35",
		"IndustrialTile00", "IndustrialTile01", "IndustrialTile02", "IndustrialTile03",
		"IndustrialTile04","IndustrialTile05","IndustrialTile06", "IndustrialTile07",
		"IndustrialTile08", "IndustrialTile09", "IndustrialTile10"
	};

	std::string path_splats = "_assets/splats/";

	std::array<sf::Texture, static_cast<int>(Texture::kMax)> textures_;

	sf::Texture blank_texture_;

	void LoadAllTextures();
};


#endif //TEXTURE_MANAGER_H
