#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Player
{
private:
    /*
        sf::Sprite sprite;
        sf::Texture texture;
    */
    sf::RectangleShape sprite;
    float speed;
    float width;
    float height;
public:
    void update();
    void draw(sf::RenderWindow& window);
    sf::FloatRect getBounds();
    Player(/*std::string& texturePath*/ float speed, float width, float height);
};