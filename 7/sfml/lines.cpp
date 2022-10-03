// @file sfml/lines.cpp
/* Linux:
  g++ -std=c++17 -g lines.cpp -o prog -lsfml-graphics -lsfml-window -lsfml-system
  
   Mac M1:
    g++ -std=c++17 -g lines.cpp -I/opt/homebrew/Cellar/sfml/2.5.1_2/include -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -o prog -lsfml-graphics -lsfml-window -lsfml-system    
*/ 

// Standard C++ Libraries
#include <vector>
#include <cmath>  // std::lerp function

// Third Party Libraries
#include <SFML/Graphics.hpp>

// Draw points in a std::vector
void DrawPoints(sf::RenderWindow& window, const std::vector<sf::Vector2f>& points){
	for(size_t i=0; i < points.size(); i++){
    	sf::CircleShape shape(5.0f);
    	shape.setFillColor(sf::Color::Green);
		shape.setPosition(points[i]);
        window.draw(shape);
	}
}


// Note: Resolution should be a value between [0,1]
// Note: If your compiler does not support C++20, then you can
// 		 write your own 'lerp' function (e.g. on https://en.cppreference.com/w/cpp/numeric/lerp code called naive_lerp)
void LinearInterpolate(sf::RenderWindow& window, const std::vector<sf::Vector2f>& points, float resolution){
	for(size_t i=0; i < points.size()-1; i++){
		for(float t = 0.0f; t < 1.0f; t=t+resolution){
			// Perform linear interpolation between each points x and y coordinate
				float x = std::lerp(points[i].x,points[i+1].x, t);
				float y = std::lerp(points[i].y,points[i+1].y, t);
				// Draw a shape
				sf::CircleShape shape(2.0f);
				shape.setFillColor(sf::Color::Blue);
				shape.setPosition(x,y);
				window.draw(shape);
		}
	}

}

// Entry point into program
int main(){
    sf::RenderWindow window(sf::VideoMode(400, 400), "Circle on Mouse");

	// Populate a vector with some points
	std::vector<sf::Vector2f> pointsVector = {{1.0f,100.0f}, {50.0f,15.0f}, {100.0f,50.0f}, {200.0f,75.0f}};

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        
        // Clear the window first
        window.clear();
		// Draw the intermediate points
		LinearInterpolate(window,pointsVector,0.05f);
        // Draw our points next (overlapping anything previously drawn)
		// Note: Think like a 'painter on a canvas' when it comes to 2D drawing order
		DrawPoints(window,pointsVector);
        // Display the shape
        window.display();
    }
    return 0;
}

