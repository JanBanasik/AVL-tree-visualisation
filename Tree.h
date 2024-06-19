//
// Created by PC on 06.06.2024.
//
#include "Node.h"
#ifndef PROJEKTC__WIZUALIZAJCADRZEW_TREE_H
#define PROJEKTC__WIZUALIZAJCADRZEW_TREE_H


class Tree
{
public:
    virtual Node * insert(Node *node, const int &value) = 0;
    virtual void insert(const int &value) = 0;
    virtual void del(int &value) = 0;
    virtual void inorder_dump() const = 0;
    virtual void inorder(Node *root) const = 0;
    virtual void level_order_dump() const = 0;
    virtual ~Tree() = default;
};



#endif //PROJEKTC__WIZUALIZAJCADRZEW_TREE_H
