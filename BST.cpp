//
// Created by PC on 06.06.2024.
//

#include "BST.h"
#include "Node.h"
#include <iostream>
#include <stack>
#include <queue>
using std::cout;
using std::endl;


void BST::inorder(Node *node) const
{
    if(!node) return;
    inorder(node -> left);
    cout<<node->val<<endl;
    inorder(node -> right);
}

Node * BST::insert(Node*node, const int &value)
{
    if(!node) return new Node(value);
    if(value < node -> val)
        node -> left = insert(node -> left, value);
    else node -> right = insert(node->right, value);
    return node;
}
void BST::inorder_dump() const
{
    auto temp = root;
    inorder(temp);
}

void BST::level_order_dump() const {
    auto temp = root;
    level_order(temp);
}

void BST::level_order(Node *node)
{
    std::stack<Node *> my_stack;
    my_stack.push(node);
    while(!my_stack.empty())
    {
        auto v = my_stack.top();
        my_stack.pop();
        std::cout<<v->val<<" ";
        if(v->left) {std::cout<<"l: "<<v->left->val<<" ";my_stack.push(v->left);}
        if(v->right) {std::cout<<"r: "<<v->right->val;my_stack.push(v->right);}
        std::cout<<std::endl;
    }
}

void delete_root(Node *root)
{
    if(!root) return;
    if(root -> left) delete_root(root -> left);
    if(root -> right) delete_root(root -> right);
    delete root;
}

BST::~BST()
{
    delete_root(root);
}



