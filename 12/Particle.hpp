#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include <SFML/Graphics.hpp>

enum PARTICLE_TYPE {AIR,SAND,WATER,STONE};

class Particle{
    sf::Vector2i m_position;
public:
    Particle();
    ~Particle();
    // Working with the particle
    sf::Vector2i GetPosition();
    void SetPosition(int x, int y);

    void Draw();
};

#endif
