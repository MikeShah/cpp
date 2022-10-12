// g++ -g image.cpp -o prog -lsfml-system -lsfml-graphics -lsfml-window  && ./prog
// @file image.cpp
#include <SFML/Graphics.hpp>

int main(){

    // Main render window
    sf::RenderWindow renderWindow(sf::VideoMode(400,400),"Images & Textures");

    // Create an image
    sf::Image myImage;
    myImage.create(400,400);

    // Create a texture
    sf::Texture myTexture;
    myTexture.loadFromImage(myImage);

    // Create a Sprite
    sf::Sprite mySprite;
    mySprite.setTexture(myTexture);

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
			// Bounds checking so we don't draw outside the window.
            if(mouse.x > -1 && mouse.x < 400 && 
               mouse.y > -1 && mouse.y < 400){
                myImage.setPixel(mouse.x,mouse.y,sf::Color(255,255,255));
                myTexture.loadFromImage(myImage);
            }
        }
        
        // ======== Draw our scene =============
        // Clear the window
        renderWindow.clear();
        // Draw the sprite
        renderWindow.draw(mySprite);
        // Display the contents drawn to the renderWindow
        renderWindow.display();
    }

    return 0;
}



