#include <SFML/Graphics.hpp>
#include "PuzzleBoard.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Picross Solver");
    window.setVerticalSyncEnabled(true);
    sf::Color backColor(235, 254, 207);

    PuzzleBoard puzzle(10);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(backColor);
        window.draw(puzzle);
        window.display();
    }

    return 0;
}