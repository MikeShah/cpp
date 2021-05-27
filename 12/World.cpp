#include "World.hpp"

World::World(int width, int height){
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
