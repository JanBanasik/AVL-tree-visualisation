#include "Visualizer.h"

Visualizer::Visualizer(AVL* new_tree) : tree(new_tree)
{
    if (!font.loadFromFile("arial.ttf"))
    {
        throw std::runtime_error("Failed to load font");
    }
}

void Visualizer::run()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "AVL Tree Visualization");

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        drawTree(window);
        window.display();
    }
}

void Visualizer::drawTree(sf::RenderWindow& window)
{
    if (!tree->root) return;
    drawNode(window, tree->root, static_cast<float>(window.getSize().x) / 2, 50, static_cast<float>(window.getSize().x) / 4);
}


void Visualizer::drawNode(sf::RenderWindow& window, Node* node, float x, float y, float xOffset)
{
    if (!node) return;


    sf::CircleShape circle(NODE_RADIUS);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(x - NODE_RADIUS, y - NODE_RADIUS);
    window.draw(circle);

    sf::Text text;
    text.setFont(font);
    text.setString(std::to_string(node->val));
    text.setCharacterSize(15);
    text.setFillColor(sf::Color::Black);
    text.setPosition(x - NODE_RADIUS / 2 + 1, y - NODE_RADIUS / 2 + 1);
    window.draw(text);

    if (node->left)
    {
        sf::Vertex line[] = {
                sf::Vertex(sf::Vector2f(x, y + NODE_RADIUS)),
                sf::Vertex(sf::Vector2f(x - xOffset, y + VERTICAL_SPACING))
        };
        window.draw(line, 2, sf::Lines);
        drawNode(window, node->left, x - xOffset, y + VERTICAL_SPACING, xOffset / 2);
    }

    if (node->right)
    {
        sf::Vertex line[] = {
                sf::Vertex(sf::Vector2f(x, y + NODE_RADIUS)),
                sf::Vertex(sf::Vector2f(x + xOffset, y + VERTICAL_SPACING))
        };
        window.draw(line, 2, sf::Lines);
        drawNode(window, node->right, x + xOffset, y + VERTICAL_SPACING, xOffset / 2);
    }
}

