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
    int speed = 0.05f;
public:
    void update();
    void draw(sf::RenderWindow& window);
    sf::FloatRect getBounds();
    Player(/*std::string& texturePath*/ int speed);
};