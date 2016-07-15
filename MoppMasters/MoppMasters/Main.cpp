#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "MopHead.h"

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(255, 480), "SFML window", sf::Style::None);
	sf::RectangleShape background(sf::Vector2f(window.getSize().x, window.getSize().y));
	background.setFillColor(sf::Color(210, 99, 100));
	// 

	// Things
	MopHead mopHead;


	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Update
		mopHead.Update(window, 1);


		// Clear and draw
		window.clear();
		window.draw(background);

		mopHead.Draw(window);
		window.display();
	}
	return EXIT_SUCCESS;
}