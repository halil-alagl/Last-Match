#include <SFML/Graphics.hpp>
#include <iostream>

class Player
{
private:
    /*
        sf::Sprite sprite;
        sf::Texture texture;
    */
    sf::RectangleShape sprite;
    int speed;
    float width;
    float height;
    int velocity;
public:
    void update();
    void draw(sf::RenderWindow& window);
    sf::FloatRect getBounds();
    Player(/*std::string& texturePath*/ int speed, float width, float height);
};