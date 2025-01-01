//
// Created by PC on 19.06.2024.
//

#ifndef PROJEKTC_WIZUALIZAJCADRZEW_VISUALIZER_H
#define PROJEKTC_WIZUALIZAJCADRZEW_VISUALIZER_H


#ifndef VISUALIZER_H
#define VISUALIZER_H

#include <SFML/Graphics.hpp>
#include "AVL.h"

class Visualizer {
public:
    explicit Visualizer(AVL* new_tree);

    void run();

private:
    void drawNode(sf::RenderWindow& window, Node* node, float x, float y, float xOffset);
    void drawTree(sf::RenderWindow& window);

    AVL* tree;
    sf::Font font;
    const float NODE_RADIUS = 20;
    const float VERTICAL_SPACING = 75;
};

#endif



#endif //PROJEKTC_WIZUALIZAJCADRZEW_VISUALIZER_H
