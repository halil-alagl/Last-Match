#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.hpp"

int main() {

    // Use brace-initialization to avoid the "most vexing parse" (function declaration)
    sf::RenderWindow window{ sf::VideoMode({640, 360}), "Last Match" };
    Player player(5);


    while (window.isOpen()) {
        window.clear();
        player.update();
        player.draw(window);
        window.display();
    }
    return 0;
}