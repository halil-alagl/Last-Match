#include "Box.hpp"
#include <cmath>


//TODO: Make the Box object and check for collisions in update function


Box::Box(float health, float speed) :health(health), speed(speed) {
    shape.setSize({ 25,25 });
    shape.setFillColor(sf::Color::Red);
    shape.setPosition({ 100,40 });
}

void Box::update(Player& player) {
    sf::FloatRect playerBounds = player.getBounds();
    sf::FloatRect boxBounds = shape.getGlobalBounds();

    std::optional<sf::FloatRect> intersection = playerBounds.findIntersection(boxBounds);

    if (intersection.has_value()) {
        sf::FloatRect overlap = intersection.value();

        sf::Vector2f playerCenter = playerBounds.position + playerBounds.size / 2.f;
        sf::Vector2f boxCenter = boxBounds.position + boxBounds.size / 2.f;
        if (overlap.size.x < overlap.size.y) {
            float pushDir = (boxCenter.x < playerCenter.x) ? -1.f : 1.f;
            shape.move({ pushDir * overlap.size.x * speed, 0.f });
        }
        else {
            float pushDir = (boxCenter.y < playerCenter.y) ? -1.f : 1.f;
            shape.move({ 0.f, pushDir * overlap.size.y * speed });
        }
    }
}

void Box::draw(sf::RenderWindow& window) {
    window.draw(shape);
}