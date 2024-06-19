//
// Created by PC on 06.06.2024.
//
#include "Tree.h"
#ifndef PROJEKTC__WIZUALIZAJCADRZEW_BST_H
#define PROJEKTC__WIZUALIZAJCADRZEW_BST_H


class BST : public Tree
{
public:
    Node *root;
    BST() : root(nullptr) {}

    Node * insert(Node *node, const int &value) override;
    void del(int &value) override {};
    void inorder_dump() const override;
    void inorder(Node *root) const override;
    void level_order_dump() const override;
    static void level_order(Node *root) ;
    ~BST() override;
};



#endif //PROJEKTC__WIZUALIZAJCADRZEW_BST_H
