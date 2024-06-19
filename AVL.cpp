//
// Created by PC on 06.06.2024.
//

#include "AVL.h"
#include <algorithm>

int AVL::height(Node* node)
{
    if (!node) return 0;
    return node->height;
}

int AVL::balance_factor(Node* node)
{
    if (!node) return 0;
    return height(node->left) - height(node->right);
}

void AVL::update_height(Node* node) {
    if (node)
    {
        node->height = 1 + std::max(height(node->left), height(node->right));
    }
}

Node* AVL::left_rotate(Node* node)
{
    Node* B = node->right;
    Node* Y = B->left;
    B->left = node;
    node->right = Y;
    update_height(node);
    update_height(B);
    return B;
}

Node* AVL::right_rotate(Node* node)
{
    Node* B = node->left;
    Node* Y = B->right;
    B->right = node;
    node->left = Y;
    update_height(node);
    update_height(B);
    return B;
}

Node* AVL::insert(Node* node, const int& value)
{
    if (!node) return new Node(value);

    if (value < node->val)
    {
        node->left = insert(node->left, value);
    }
    else if (value > node->val)
    {
        node->right = insert(node->right, value);
    }
    else
    {
        return node;
    }

    update_height(node);
    return rebalance(node);
}



Node * AVL::rebalance(Node *node)
{
    if(balance_factor(node) >= 2)
    {
        if(balance_factor(node->left) <= -1)
        {
            node -> left = left_rotate(node->left);
        }
        return right_rotate(node);

    }
    else if(balance_factor(node) <= -2)
    {
        if(balance_factor(node->right) >= 1)
        {
            node -> right = right_rotate(node->right);
        }
        return left_rotate(node);
    }
    return node;
}

