#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

struct BinaryNode{
    int value;
    BinaryNode* left;
    BinaryNode* right;
};

class BinaryTree{
    private:
        BinaryNode* m_root;

        // Private helper function, to help
        // make insertion easier.
        void Insert(int value, BinaryNode* node);
        // Private helper function to help
        // with search
        bool Exists(int value, BinaryNode* node);
        // Private hlper function to enable,
        // printing.
        void Print(BinaryNode* node);
    public:
        // Constructor
        BinaryTree();
        // Destructor
        ~BinaryTree();
        // Copy Constructor
        BinaryTree(const BinaryTree& copy);
        // Copy Assignment Constructor
        BinaryTree& operator=(const BinaryTree& rhs);

        void Insert(int value);
        bool Exists(int value);
        void Print();
        // Delete();
};










#endif
