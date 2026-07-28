#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.hpp"

int main() {

    // Use brace-initialization to avoid the "most vexing parse" (function declaration)
    sf::RenderWindow window{ sf::VideoMode({640, 360}), "Last Match",sf::Style::Titlebar | sf::Style::Close };
    Player player(5);


    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        player.update();
        player.draw(window);
        window.display();
    }
    return 0;
}