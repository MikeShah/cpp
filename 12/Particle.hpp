#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include <SFML/Graphics.hpp>

enum PARTICLE_TYPE {AIR,SAND,WATER,STONE};

class Particle{
    sf::Vector2i m_position;
    PARTICLE_TYPE m_particletype;
public:
    Particle();
    ~Particle();
    // Working with the particle
    PARTICLE_TYPE GetParticleType();
    void SetParticleType(PARTICLE_TYPE type);
    sf::Vector2i GetPosition();
    void SetPosition(int x, int y);

    void Draw(sf::RenderWindow* windowRef);
};

#endif
