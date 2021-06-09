// g++ -g -std=c++20 main.cpp -o prog -lsfml-graphics -lsfml-window -lsfml-system
#include <SFML/Graphics.hpp>

#include <vector>
#include <cmath>
#include <iostream>

struct Point2D{
    float x,y; // coordinate in the window
    float radius=10.0f;
};

// Does not do any fancy computation, just draws
// the control points, and a linearlly interpoalted line, between them.
class LinearSpline{
    public:

        // Added a point
        void AddPoint(float x, float y){
            Point2D newPoint;
            newPoint.x = x;
            newPoint.y = y;

            m_points.push_back(newPoint);
        }

        // Allowed for user interaction
        // We checked distance, against our right mouse click
        // and allowed the user to reposition the point while the
        // right-click was held.
        //
        // TODO: Could be improved to make moving smoother.
        void Update(sf::RenderWindow& windowRef){
            for(int i=0; i < m_points.size(); i++){
                float distance = 100000.0f;
                sf::Vector2i localPosition = sf::Mouse::getPosition(windowRef);
                
                float xx = std::pow(localPosition.x - m_points[i].x,2);
                float yy = std::pow(localPosition.y - m_points[i].y,2);
                distance = std::sqrt(xx+yy);
                if(distance < m_points[i].radius/2.0f && sf::Mouse::isButtonPressed(sf::Mouse::Right)){
//                    std::cout << "Point " << i << "was right-clicked\n"; 
                    m_points[i].x = localPosition.x;
                    m_points[i].y = localPosition.y;
                }

            } 
        }

        // Where we iterated through, and drew all of our points
        // First we interpolated between two points, one after the other
        // and then drew little red circles between them.
        void Render(sf::RenderWindow& windowRef){


            // Interpolate between two points
            // and draw the intermediate 'curve'
            for(int i=0; i < m_points.size()-1; i++){
                // Get point 1's coordinates
                for(float t = 0.0f; t<=1.0f; t+=0.02f){
                    float halfRadius = m_points[i].radius/2.0f;
                    // compute the interpolated x and y position
                    float interpolatedXPos = std::lerp(m_points[i].x,m_points[i+1].x,t);
                    float interpolatedYPos = std::lerp(m_points[i].y,m_points[i+1].y,t);
                    sf::CircleShape circle(1.0f);
                    circle.setFillColor(sf::Color::Red);
                    circle.setPosition(interpolatedXPos+halfRadius,interpolatedYPos+halfRadius);
                    windowRef.draw(circle);
                }
            }

            // To draw our control points
            // We did this after drawing the intermediate 'red' points'
            // so that othey would appear on top.
            for(int i=0; i < m_points.size(); i++){
                sf::CircleShape circle(m_points[i].radius);
                circle.setFillColor(sf::Color::Blue);
                circle.setPosition(m_points[i].x,m_points[i].y);
                windowRef.draw(circle);
            }
        }
    private:
        std::vector<Point2D> m_points;
};


int main(){

    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");

    // Created our data structure
    LinearSpline spline;
    // Added some test points
    spline.AddPoint(5.0f,5.0f);
    spline.AddPoint(15.0f,45.0f);
    spline.AddPoint(25.0f,15.0f);
    spline.AddPoint(35.0f,85.0f);

    // Our main loop while the window is open.
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Mouse interaction
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            sf::Vector2i localPosition = sf::Mouse::getPosition(window); 
            spline.AddPoint(localPosition.x,localPosition.y);
        }
        // Clear our window
        window.clear();
        // Handle any user interaction
        spline.Update(window);
        // Render our spline
        spline.Render(window);

        // Show our window contents
        window.display();
    }

    return 0;
}
