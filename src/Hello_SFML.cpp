// Hello_SFML.cpp : Defines the entry point for the application.
//

#include "Hello_SFML.h"

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow renderWindow(sf::VideoMode(800, 480), "Color Animation", sf::Style::Fullscreen);

    sf::Clock clock;
    sf::Event event;
    int change = 0;
    int red = 255;
    int blue = 0;
    float duration = float();

    // Set a basic red circle as the starting shape
    sf::Color color = sf::Color::Red;
    sf::CircleShape circle(150);
    circle.setFillColor(color);

    while (renderWindow.isOpen()) {
        // How much time since last loop?
        sf::Time dt = clock.restart();
        duration += dt.asSeconds();

        while (renderWindow.pollEvent(event)) {
            //Handle events here
            if (event.type == sf::Event::EventType::Closed)
                renderWindow.close();
        }

        // Animation started and animation duration per frame (0.01f) reached
        // Change color by 1 
        if (duration > 0.01f) {
            // Reset frame time and set new color for circle
            duration = 0;

            if (change) {
                red++;
                if (red == 255) change = !change;
            }
            else {
                red--;
                if (red == 0) change = !change;
            }
            blue = 255 - red;
            color = sf::Color(red, 0, blue);
            circle.setFillColor(color);
        }

        // Clear render window and draw circle
        renderWindow.clear(sf::Color::Black);
        renderWindow.draw(circle);
        renderWindow.display();
    }
}