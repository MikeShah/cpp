// g++ -g gameloop.cpp -o prog -lsfml-system -lsfml-graphics -lsfml-window  && ./prog
// @file gameloop.cpp
#include <SFML/Graphics.hpp>

int main(){

    // Main render window
    sf::RenderWindow renderWindow(sf::VideoMode(400,400),"Game Loop Structure");
    // Setup Objects
    sf::CircleShape shape(25.0f);

    // Main Application Loop
    while(renderWindow.isOpen()){

        // Handle Events
        sf::Event event;
        while(renderWindow.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                renderWindow.close();
            }
        }
 
        // Handle Inputs
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            sf::Vector2i mouse = sf::Mouse::getPosition(renderWindow);
            shape.setPosition(mouse.x,mouse.y);
        }
        
        // ======== Draw our scene =============
        // Clear the window
        renderWindow.clear();
        // Draw the sprite
        renderWindow.draw(shape);
        // Display the contents drawn to the renderWindow
        renderWindow.display();
    }

    return 0;
}



