#include <SFML/Graphics.hpp>
#include <iostream>
#include <unordered_map>


class ResourceManager{
public:
	static ResourceManager Instance(){
		static ResourceManager* instance = new ResourceManager();
		return *instance;
	}

	static sf::Texture* LoadTexture(std::string filename){
		// If the file is already in our map, then return it	
		if(m_resources[filename]){
			std::cout << "Resource exists" << std::endl;
			return m_resources[filename];
		}else{ // otherwise, create a new texture, and return a pointer
   			  // to that texture
			std::cout << "Resource does not exist, so create it" << std::endl;
			sf::Texture* newTexture = new sf::Texture;
			newTexture->loadFromFile(filename.c_str());
			m_resources[filename] = newTexture;
			return newTexture;
		}
	}

private:
	static std::unordered_map<std::string,sf::Texture*> m_resources;
};

// Need to initalize static member varaibesl in your .cpp file
std::unordered_map<std::string,sf::Texture*> ResourceManager::m_resources;


class AnimatedSprite{
public:
	AnimatedSprite(std::string filename){
		std::cout << "Constructor was called" << std::endl;
		m_filename = filename;

		m_texture = ResourceManager::Instance().LoadTexture(filename);

//		m_texture.loadFromFile(filename.c_str());
//		std::cout << "filename is loaded:" << filename.c_str() << std::endl;
		m_sprite.setTexture(*m_texture);
		m_currentFrame = 0;	
	}
	~AnimatedSprite(){
	}

	// Animates the sprite
	void Play(sf::RenderWindow& windowRef,int x, int y,int startFrame, int endFrame){

		m_sprite.setTextureRect(sf::IntRect(m_currentFrame*75, 0, 75, 82));
		m_sprite.setPosition(x,y);
		windowRef.draw(m_sprite);
		
		m_currentFrame++;
		if (m_currentFrame > endFrame){
			m_currentFrame = startFrame;		
		}
	}
private:
	int m_currentFrame;
	sf::Texture* m_texture;
	sf::Sprite m_sprite;
	std::string m_filename;
};


int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");

	AnimatedSprite animated("sprite.bmp");
	AnimatedSprite animated1("sprite.bmp");
	AnimatedSprite animated2("sprite.bmp");
	AnimatedSprite animated3("sprite.bmp");
	AnimatedSprite animated4("sprite.bmp");
	AnimatedSprite animated5("sprite.bmp");
	AnimatedSprite animated6("sprite.bmp");
	AnimatedSprite animated7("sprite.bmp");
	AnimatedSprite animated8("sprite.bmp");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
			}
        }

        window.clear();

		animated.Play(window,10,20,0,6);
		animated1.Play(window,50,20,0,6);
		animated2.Play(window,100,20,0,6);
		animated3.Play(window,150,20,0,6);
		animated4.Play(window,50,120,0,6);
		animated5.Play(window,60,220,0,6);
		animated6.Play(window,30,220,0,6);
		animated7.Play(window,120,250,0,6);
		animated8.Play(window,160,220,0,6);

        window.display();
    }

    return 0;
}
