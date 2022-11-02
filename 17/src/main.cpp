// @file sfml/collisions.cpp
/* Linux:
  g++ -g ./src/*.cpp -o prog -I./include -lsfml-graphics -lsfml-window -lsfml-system
  
   Mac M1:
    g++ -g ./src/*.cpp -I./include -I/opt/homebrew/Cellar/sfml/2.5.1_2/include -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -o prog -lsfml-graphics -lsfml-window -lsfml-system    
*/ 


// This program today takes arguments
// ./prog 0 100
// ^ program
//        ^ collision detection on or off
//          ^ how many objects to render


#include <iostream>

#include <SFML/Graphics.hpp>

#include "ColliderShape2D.hpp"


int main(int argc, char* argv[])
{
    if(argc < 3){
        std::cout << "Error run program with:\n"
                  << "e.g. ./prog 1 100\n"
                  << "e.g. ./prog 0 400\n"
                  << "First argument is collision(1=on, 0=off)"
                  << "Second argument is number of shapes"
                  << std::endl;
        return 0;
    }

    const int COLLISION = std::stoi(argv[1]);
    const int OBJECTS   = std::stoi(argv[2]);

    // Randomize the seed
    srand (time(NULL));

    sf::RenderWindow window(sf::VideoMode(400, 400), "Collision Test");

    // Create some number of Colliders

    ColliderShape2D* shapes = new ColliderShape2D[OBJECTS];


    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
      
        // Clear the window first
        window.clear();

        if(COLLISION==1){
            // Clear any collisions
            for(int i=0; i < OBJECTS; ++i){
                shapes[i].ClearCollisionState();
            }

            // Check collision
            for(int i=0; i < OBJECTS; ++i){
                for(int j=1;  j < OBJECTS; j++){
                    if(i==j){
                        continue;
                    }
                    // Check collision status
                    shapes[i].IsColliding(shapes[j]);
                }
            }
        }

        // Draw our shape
        for(int i = 0; i < OBJECTS; ++i){
            shapes[i].Move();
            shapes[i].Render(window);
        }
        // Display the shape
        window.display();
    }

    // Free our 'shapes'
    delete[] shapes;

    return 0;
}

