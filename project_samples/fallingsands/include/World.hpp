#ifndef WORLD_HPP
#define WORLD_HPP

#include "Particle.hpp"
// Standard libraries
#include <vector>

class World{
public:
    // Constructor
	World(sf::RenderWindow* w,int width, int height);
    // Destructor
	~World();
    // Add a new particle
    void AddParticle(Particle p);
    // Updating our world
    void Update();
    // Draw the particles
    void Draw();

private:
    sf::RenderWindow* m_windowPtr;
	int m_width;
	int m_height;
    
    std::vector<Particle> m_particles;    

	PARTICLE_TYPE* m_grid; // Hold values for what particle occupies
				 // a particular cell.
};

#endif
