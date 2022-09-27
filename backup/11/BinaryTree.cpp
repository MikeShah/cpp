#include "BinaryTree.hpp"

// C++ Standard Library files
#include <iostream>

// Constructor implementation
BinaryTree::BinaryTree(){
    m_root = nullptr;
}
// Destructor implementation
BinaryTree::~BinaryTree(){
    // TODO: Student exercise

}
// Copy constructor implementation
BinaryTree::BinaryTree(const BinaryTree& copy){

    // TODO: Student exercise
}
// Copy Assignment Constructor
BinaryTree& BinaryTree::operator=(const BinaryTree& rhs){
    if(this==&rhs){
        return *this;
    }

    // TODO: Student exercise
    return *this;
}

void BinaryTree::Insert(int value, BinaryNode* node){
    // (2) Compare to the node,
    //     and see if our 'value' is
    //     less than or greater than
    //     the node. This tells us, to go
    //     left or right in our tree
    if(value < node->value){
        if(node->left != nullptr){
            Insert(value,node->left);
        }else{
            // Create our new 'leaf node' on the
            // left side of the binary tree
            BinaryNode* newNode = new BinaryNode;
            newNode->value = value;
            newNode->left= nullptr;
            newNode->right = nullptr;
            // Appropriately assign the node
            node->left = newNode;
        }
    }else if (value >= node->value){ 
        if(node->right != nullptr){
            Insert(value,node->right);
        }else{
            // Create our new 'leaf node' on the
            // left side of the binary tree
            BinaryNode* newNode = new BinaryNode;
            newNode->value = value;
            newNode->left= nullptr;
            newNode->right = nullptr;
            // Appropriately assign the node
            node->right = newNode;
        }
    }

}

void BinaryTree::Insert(int value){
    // (1) If our tree is empty
    if(nullptr==m_root){
        BinaryNode* temp = new BinaryNode;
        temp->value = value;
        temp->left = nullptr;
        temp->right = nullptr;
        // Assign our m_root, to the newly allocated node.
        m_root = temp;
    }else{
        Insert(value,m_root);
    }

}



bool BinaryTree::Exists(int value, BinaryNode* node){
    if(node==nullptr){
        return false;
    } 
    // (2) case 2, we find the node
    if(node->value == value){
        return true;
    }
    // (3) case 3, search left or right
    // for our node to see if it exists
    if(value < node->value){
        return Exists(value,node->left);
    }
    if(value > node->value){
        return Exists(value,node->right);
    }


    return false;
}


bool BinaryTree::Exists(int value){
    return Exists(value,m_root);
}


void BinaryTree::Print(BinaryNode* node){
    
    if(node->left !=nullptr){
        Print(node->left);
    }
    // Then print
    std::cout << node->value << ",";
    // Then traverse right
    if(node->right !=nullptr){
        Print(node->right);
    }

}

void BinaryTree::Print(){
    Print(m_root);
    std::cout << std::endl;
}





















