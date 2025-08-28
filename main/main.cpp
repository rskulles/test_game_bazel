#include <SFML/Graphics.hpp>

int main()
{

#pragma region Initialization
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(800, 600)), "TEST GAME", sf::Style::None);
    sf::Clock clock;
    float delta_time = 0;

#pragma endregion Initialization

#pragma region GameLoop
    while (window.isOpen())
    {
        // gets the time between each frame
        delta_time = clock.reset().asSeconds();
#pragma region Events
        while (const auto e = window.pollEvent())
        {
            if (e->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if (const auto kp = e->getIf<sf::Event::KeyPressed>())
            {
                if (kp->scancode == sf::Keyboard::Scancode::Escape)
                {
                    window.close();
                }
            }
        }
#pragma endregion Events

#pragma region Update
#pragma endregion Update

#pragma region Render
        window.clear(sf::Color::Cyan);

        window.display();
#pragma endregion Render
    }
#pragma endregion GameLoop
    return 0;
}
