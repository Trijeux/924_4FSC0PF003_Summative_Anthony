#ifndef FONT_MANAGER_H
#define FONT_MANAGER_H

#include <array>
#include <SFML/Graphics/Font.hpp>

class FontManager
{
public:
	//Nom donner pour l'enume pour appler dans le code la texture
	enum class Font
	{
		kArial, kArialbd, kArialbi, kAriali, kArialn,
		kArialnb, kArialnbi, kArialni, kAriblk, kMax
	};

	void Setup();

	sf::Font& font(Font resource_id);

protected:
private:
	//Nom donner pour appler dans le dossier (que des .png)
	const std::array<std::string, static_cast<int>(Font::kMax)> names_font_
	{
		"arial", "arialbd", "arialbi", "ariali", "ARIALN",
		"ARIALNB", "ARIALNBI", "ARIALN", "ariblk"
	};

	std::string path_splats = "_assets/fonts/";

	std::array<sf::Font, static_cast<int>(Font::kMax)> fonts_;

	sf::Font blank_font_;

	void LoadAllFont();
};

#endif //FONT_MANAGER_H
