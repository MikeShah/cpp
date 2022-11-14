// Cite: SFML Tutorial at: https://www.sfml-dev.org/tutorials/2.5/graphics-draw.php
#include <SFML/Graphics.hpp>

#include <iostream>

#include "World.hpp"

// Dimensions of the world
const int g_worldWidth  = 400;
const int g_worldHeight = 400;


int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(g_worldWidth, g_worldHeight), "Falling Sands");

	// Create our world for the simulation
	World w(&window, g_worldWidth,g_worldHeight);

    // run the program as long as the window is open
    while (window.isOpen()){
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
			// left mouse button is pressed: shoot
			sf::Vector2i pos = sf::Mouse::getPosition(window); // window is a sf::Window
			
			std::cout << pos.x << "," << pos.y << std::endl;
			Particle p;
			p.SetPosition(pos.x,pos.y);
			p.SetParticleType(PARTICLE_TYPE::SAND);
			w.AddParticle(p);
		}


        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
		w.Update();
		// Finally do the particle simulation
		w.Draw();

        // end the current frame
        window.display();
    }

    return 0;
}
