// @file sfml/simple2.cpp
/* Linux:
  g++ -g simple2.cpp -o prog -lsfml-graphics -lsfml-window -lsfml-system
  
   Mac M1:
    g++ -g simple2.cpp -I/opt/homebrew/Cellar/sfml/2.5.1_2/include -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -o prog -lsfml-graphics -lsfml-window -lsfml-system    
*/ 

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Circle on Mouse");
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        
        // Retrieve our mouse position within the window
        sf::Vector2i localPosition = sf::Mouse::getPosition(window);
        // Note: The Vector2i holds integers, and 
        //       'shape' takes in two floats.
        shape.setPosition(localPosition.x, localPosition.y);

        // Clear the window first
        window.clear();
        // Draw our shape
        window.draw(shape);
        // Display the shape
        window.display();
    }
    return 0;
}

