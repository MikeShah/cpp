// @file sfml/simple2.cpp
/* Linux:
  g++ -g simple2.cpp -o prog -lsfml-graphics -lsfml-window -lsfml-system
  
   Mac M1:
    g++ -g simple2.cpp -I/opt/homebrew/Cellar/sfml/2.5.1_2/include -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -o prog -lsfml-graphics -lsfml-window -lsfml-system    
*/ 


// This program today takes arguments
// ./prog 0 100
// ^ program
//        ^ collision detection on or off
//          ^ how many objects to render


#include <iostream>

#include <SFML/Graphics.hpp>

struct ColliderShape2D{

    // Create our shape
    ColliderShape2D(){
        m_width     = rand() % 10 + 2;
        m_height    = rand() % 10 + 2;;

        m_x = rand() % 400-m_width  + 1;
        m_y = rand() % 400-m_height + 1;;


        m_xDirection = (rand() % 3 > 1) ? -1: 1;
        m_yDirection = (rand() % 3 > 1) ? -1: 1;

        m_speed = 0.5f / (rand()%1000 + 1);

        m_shape = new sf::RectangleShape(sf::Vector2f(m_width,m_height));
        m_shape->setFillColor(sf::Color::Green);
        m_isColliding = false;
    }

    // Destroy our shape
    ~ColliderShape2D(){
        if(nullptr != m_shape){
            delete m_shape;
        }
    }



    // Check if we are colliding with any other shape
    // Does not effect other shapes status
    bool IsColliding(const ColliderShape2D& shape){
        // Construct two rectangles
        sf::IntRect r1(m_x,m_y,m_width,m_height);
        sf::IntRect r2(shape.m_x,shape.m_y,shape.m_width,shape.m_height);

        // If we have yet to detect a collision, with any object
        // then report the status here.
        if(0==m_isColliding){
            m_isColliding = r1.intersects(r2);
        }

        return m_isColliding;
    }

    void Move(){
        m_x += m_xDirection * m_speed;
        m_y += m_yDirection * m_speed;

        if(m_x < 0){
            m_xDirection = 1;
        }

        if(m_y < 0){
            m_yDirection = 1;
        }
        if(m_x > 400){
            m_xDirection *= -1;
        }

        if(m_y > 400){
            m_yDirection *= -1;
        }
    }

    void SetPosition(float x, float y){
        m_x = x;
        m_y = y;
    }

    void Render(sf::RenderWindow& renderWindow){
        if(m_isColliding){
            m_shape->setFillColor(sf::Color::Red);
        }else{
            m_shape->setFillColor(sf::Color::Green);
        }
        m_shape->setPosition(m_x,m_y);
        renderWindow.draw(*m_shape);
    }


    void ClearCollisionState(){
        m_isColliding = 0;
    }


    // Member Variables
    sf::Shape* m_shape;
    float m_width;
    float m_height;
    float m_x;
    float m_y;
    int m_xDirection;
    int m_yDirection;
    float m_speed;
    bool m_isColliding;
};


int main(int argc, char* argv[])
{
    if(argc < 3){
        std::cout << "Error run program with:\n"
                  << "e.g. ./prog 1 100\n"
                  << "e.g. ./prog 0 400\n"
                  << std::endl;
        return 0;
    }

    const int COLLISION = std::stoi(argv[1]);
    const int OBJECTS   = std::stoi(argv[2]);

    // Randomize the seed
    srand (time(NULL));

    sf::RenderWindow window(sf::VideoMode(400, 400), "Collision Test");

    // Create some number of Colliders
    //
    ColliderShape2D shapes[OBJECTS];

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
    return 0;
}

