//
// Created by PC on 06.06.2024.
//

#ifndef PROJEKTC__WIZUALIZAJCADRZEW_NODE_H
#define PROJEKTC__WIZUALIZAJCADRZEW_NODE_H



class Node
{
public:
    int val;
    int height;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int v, Node*l,Node*r) : val(v), left(l), right(r) {}
    explicit Node(int v) : val(v), left(nullptr), right(nullptr) {}
};



#endif //PROJEKTC__WIZUALIZAJCADRZEW_NODE_H
