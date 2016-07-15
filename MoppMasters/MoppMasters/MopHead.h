#pragma once
#include "SFML\Graphics.hpp"

class MopHead
{
public:
	MopHead();
	~MopHead();

	void Update(sf::RenderWindow &window, float deltaTime);
	void Draw(sf::RenderWindow &window);
private:
	sf::CircleShape m_mopMarker;
	std::vector<sf::CircleShape*> m_mopped;
};

