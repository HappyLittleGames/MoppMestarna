#include "MopHead.h"



MopHead::MopHead()
{
	m_mopMarker.setFillColor(sf::Color(55, 45, 160));
	m_mopMarker.setRadius(35);
	m_mopMarker.setOrigin(sf::Vector2f(m_mopMarker.getRadius(), m_mopMarker.getRadius()));
}


MopHead::~MopHead()
{
}

void MopHead::Update(sf::RenderWindow & window, float deltaTime)
{
	sf::Vector2f pos(sf::Mouse::getPosition() - window.getPosition());
	m_mopMarker.setPosition(pos);
	m_mopped.push_back(new sf::CircleShape(m_mopMarker));
}

void MopHead::Draw(sf::RenderWindow & window)
{
	for each (sf::CircleShape* splash in m_mopped)
	{
		window.draw(*splash);
	}
	window.draw(m_mopMarker);
}
