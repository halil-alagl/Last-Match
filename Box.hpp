//TODO: Set up header file for the Box Object. Box object shuld be interactable via collision
#pragma once
#include <SFML/Graphics.hpp>
#include "Player.hpp"


class Box {
private:
    sf::RectangleShape shape;
    float health;
    float speed;
public:
    Box(float health, float speed);
    void update(Player& player);
    void draw(sf::RenderWindow& window);
};