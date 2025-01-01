#include <iostream>
#include "AVL.h"
#include "Visualizer.h"
#include <vector>

void testAVLTree() {
    AVL* my_tree = new AVL();

    std::vector<int> values = {10, 20, 30, 40, 50, 25,14,12,20,11,31,9};
    for (int value : values) {
        std::cout << "Inserting " << value << " into AVL tree...\n";
        my_tree->insert(value);
    }
    Visualizer visualizer(my_tree);
    visualizer.run();

    delete my_tree;
}

int main() {
    testAVLTree();
    return 0;
}