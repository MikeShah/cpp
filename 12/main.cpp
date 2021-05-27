// Cite: SFML Tutorial at: https://www.sfml-dev.org/tutorials/2.5/graphics-draw.php
#include <SFML/Graphics.hpp>

const int g_worldWidth  = 400;
const int g_worldHeight = 400;

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(g_worldWidth, g_worldHeight), "Falling Sands");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}
