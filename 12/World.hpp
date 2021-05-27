#ifndef WORLD_HPP
#define WORLD_HPP

#include "Particle.hpp"
// Standard libraries
#include <vector>

class World{
public:
    // Constructor
	World(int width, int height);
    // Destructor
	~World();

private:
	int m_width;
	int m_height;
    
    std::vector<Particle> m_particles;    

	PARTICLE_TYPE* m_grid; // Hold values for what particle occupies
				 // a particular cell.
};

#endif
