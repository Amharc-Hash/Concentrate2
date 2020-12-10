#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include "State.h"
#include "Gui.h"

class HighScore :
	public State
{
private:
	//Variables
	sf::Texture backgroundTexture;
	sf::RectangleShape background;
	sf::Font font;

	std::map<std::string, gui::Button*> buttons;
	std::map<std::string, gui::DropDownList*> dropDownLists;

	sf::Text optionsText;

	std::vector<sf::VideoMode> modes;

	//Functions
	void initVariables();
	void initFonts();
	void initKeybinds();
	void initGui();
	void resetGui();

public:
	HighScore(StateData* state_data);
	virtual ~HighScore();

	//Accessors

	//Functions
	void saveToFile(const std::string file_name);
	void loadFromFile();
	void updateInput(const float& dt);
	void updateGui(const float& dt);
	void update(const float& dt);
	void renderGui(sf::RenderTarget& target);
	void render(sf::RenderTarget* target = NULL);
};

#endif