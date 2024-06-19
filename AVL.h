//
// Created by PC on 06.06.2024.
//
#include "BST.h"


#ifndef PROJEKTC__WIZUALIZAJCADRZEW_AVL_H
#define PROJEKTC__WIZUALIZAJCADRZEW_AVL_H


class AVL : public BST
{
public:
    static int balance_factor(Node *node) ;
    static Node* rebalance(Node *node);
    static Node* left_rotate(Node *node);
    static Node* right_rotate(Node *node);
    static int height(Node* node) ;
    static void update_height(Node *node);
    Node * insert(Node *node, const int &value) override;
    void insert(const int &value) override {root = insert(root, value);}
};


#endif //PROJEKTC__WIZUALIZAJCADRZEW_AVL_H
