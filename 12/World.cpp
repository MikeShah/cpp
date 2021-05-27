#include "World.hpp"

World::World(sf::RenderWindow* w,int width, int height){
    m_windowPtr = w;
    m_width = width;
    m_height = height;
    // Initialize our array
    m_grid = new PARTICLE_TYPE[width*height];
    for(int i=0; i < width*height; i++){
        m_grid[i] = PARTICLE_TYPE::AIR;
    }
}

World::~World(){
    delete[] m_grid;
}

// May have to implement copy constructor
void World::AddParticle(Particle p){
    m_particles.push_back(p); 
}

// Iterate through all particles.
// Update our 'grid' structure
// Figure out what type they are, and how they move
void World::Update(){
    // Update grid structure
    for(int i=0; i < m_particles.size(); i++){
        sf::Vector2i pos = m_particles[i].GetPosition();
        m_grid[pos.y * m_width + pos.x] = m_particles[i].GetParticleType();
    }
    
    // Move our particles    
    
}

void World::Draw(){
    for(int i=0; i < m_particles.size(); i++){
       m_particles[i].Draw(m_windowPtr); 
    }
}
