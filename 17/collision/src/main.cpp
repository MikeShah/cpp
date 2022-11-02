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

// Group related data into a struct
struct ArgumentSettings{
    // Populate the program arguments
    int m_Collision;
    int m_Objects;
};

int main(int argc, char* argv[]){

    // Ensure the programmer provided enough arguments.
    if(argc < 3){
        std::cout << "Error run program with:\n"
                  << "e.g. ./prog 1 100\n"
                  << "e.g. ./prog 0 400\n"
                  << "First argument is collision(1=on, 0=off)"
                  << "Second argument is number of shapes"
                  << std::endl;
        return 0;
    }
    // Populate the program arguments
    ArgumentSettings args;
    args.m_Collision = std::stoi(argv[1]);
    args.m_Objects   = std::stoi(argv[2]);

    // Randomize the seed for the random number generator
    srand (time(NULL));

    // Create our application window
    sf::RenderWindow window(sf::VideoMode(400, 400), "Collision Test");

    // Create some number of Colliders
    // Note: I'm heap allocating, because it's possible the user
    //       decides to allocate '1000000' of objects which might
    //       cause a stack overflow.
    ColliderShape2D* shapes = new ColliderShape2D[args.m_Objects];

    // Create a clock from sfml
    sf::Clock clock;

    // Main application loop
    while (window.isOpen()){
        // Compute Frames per second
        float currentTime = clock.restart().asSeconds();
        float fps = 1.0f / (currentTime);        

        window.setTitle("Collision Test at\t"+std::to_string(static_cast<int>(fps))+" FPS");
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
      
        // Clear the window first
        window.clear();

        if(args.m_Collision == 1){
            // Clear any collisions
            for(int i=0; i < args.m_Objects; ++i){
                shapes[i].ClearCollisionState();
            }

            // Check collision
            for(int i=0; i < args.m_Objects; ++i){
                for(int j=1;  j < args.m_Objects; j++){
                    if(i==j){
                        continue;
                    }
                    // Check collision status
                    shapes[i].IsColliding(shapes[j]);
                }
            }
        }

        // Update and then 
        // draw our shape
        for(int i = 0; i < args.m_Objects; ++i){
            shapes[i].Update();
            shapes[i].Render(window);
        }
        // Display the shape
        window.display();
    }

    // Free our 'shapes'
    delete[] shapes;

    return 0;
}

