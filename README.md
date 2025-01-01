
# AVL Tree Visualization

## Description

This project implements an AVL Tree and provides a visualization using SFML. The AVL Tree is a self-balancing binary search tree, where the difference between the heights of the left and right subtrees is at most one. This implementation supports insertion and visualization of the tree structure.

### Features:
- AVL Tree insertions with automatic balancing.
- Inorder traversal and level order dump of the tree.
- Visual representation of the AVL tree using SFML.

## Classes

### 1. `Node`
Represents a node in the binary tree.
- `int val`: The value of the node.
- `int height`: The height of the node (used for balancing).
- `Node* left`: Pointer to the left child.
- `Node* right`: Pointer to the right child.

### 2. `Tree`
Abstract base class representing a generic tree structure.
- `virtual Node* insert(Node* node, const int& value) = 0`: Abstract method for inserting a value.
- `virtual void insert(const int& value) = 0`: Virtual method for inserting a value.
- `virtual void del(int& value) = 0`: Abstract method for deleting a value.
- `virtual void inorder_dump() const = 0`: Virtual method for printing inorder traversal.
- `virtual void inorder(Node* root) const = 0`: Abstract method for inorder traversal.
- `virtual void level_order_dump() const = 0`: Abstract method for level order traversal.

### 3. `BST`
Binary Search Tree class inheriting from `Tree`.
- Implements insertion and traversal methods for a binary search tree.
- Destructor that deletes all nodes.

### 4. `AVL`
AVL Tree class inheriting from `BST`.
- Implements AVL-specific balancing functionality.
- Methods for rebalancing and rotations (left and right).

### 5. `Visualizer`
Class for visualizing the AVL Tree using SFML.
- Displays the tree in a window with nodes and their connections.
- Draws nodes as circles and edges as lines, representing the tree structure visually.
- Uses `sf::RenderWindow` to create a graphical interface.

## Installation

1. Clone the repository:
   ```bash
   git clone <repository_url>
   ```

2. Install dependencies:
   - You will need SFML for the visualization part.
   - On Linux, you can install SFML with:
     ```bash
     sudo apt-get install libsfml-dev
     ```

3. Build the project using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

## Usage

To use the AVL tree and its visualization:
1. Compile and run the code. The tree will be created and visualized in a window.

2. The `testAVLTree()` function creates an AVL tree, inserts a series of values, and then visualizes the tree using the `Visualizer` class.

### Example Values Inserted into the Tree:
```cpp
std::vector<int> values = {10, 20, 30, 40, 50, 25, 14, 12, 20, 11, 31, 9, 39, 38};
```

3. The visualization window will open, displaying the AVL tree structure, with nodes represented by green circles and edges connecting them.

## Conclusion

This project provides an easy way to visualize an AVL tree with automatic balancing, showing how the tree evolves as elements are inserted. The visualization helps understand how the tree rebalances itself after each insertion.
