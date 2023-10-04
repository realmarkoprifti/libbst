#ifndef LIBBST_H
#define LIBBST_H

struct TreeNode
{
    int val;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;
};


class BST
{
    private:
        TreeNode* root;
        bool sorted;

    public:
        BST(int* numArr, int size);
        ~BST();

        void insert(int val);
        void del(int val);
        void sort();
        bool check_sort();
        TreeNode* search(int val);
};

#endif