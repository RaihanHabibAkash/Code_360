// Problem: Is Node Present
// Platform: Code360
// Difficulty: Easy
// Link: https://www.naukri.com/code360/problems/code-find-a-node_5682
// Topics: Binary tree searching using Recurtion

/*
For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^5

Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec.
Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7
Sample Output 1:
true
Explanation For Output 1:
Clearly, we can see that 7 is present in the tree. So, the output will be true.
Sample Input 2:
2 3 4 -1 -1 -1 -1
10
Sample Output 2:
false
*/


bool is_there(BinaryTreeNode<int>* root, int x, bool &flag) {
    // Base case
    if(!root) return false;
    // If the flag is one time true it will always true
    if(flag) return flag;


    if(root->data == x) {
        flag = true;
        return flag;
    }

    is_there(root->left, x, flag);
    is_there(root->right, x, flag);
    return flag;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    bool flag = false;
    return is_there(root, x, flag);
}

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/