#include "Player.hpp"

sf::FloatRect Player::getBounds() {
    return sprite.getGlobalBounds();
}

void Player::update() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
        sprite.move({ 0,-1.f * speed });
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
        sprite.move(sf::Vector2f(-1.f * speed, 0));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        sprite.move(sf::Vector2f(0, speed));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        sprite.move(sf::Vector2f(speed, 0));
    }
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

Player::Player(/*std::string& texturePath*/ float speed, float width, float height) : speed(speed), height(height), width(width) {
    /*if (!texture.loadFromFile(texturePath)) {
        std::cout << "Texture can't be loaded";
    }
    sprite.setTexture(texture);*/
    sprite.setSize({ width,height });
    sprite.setFillColor(sf::Color::Blue);
    sprite.setPosition({ 30,60 });
}