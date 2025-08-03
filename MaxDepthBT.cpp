
#include <iostream>
#include <stack>
using namespace std;
  //Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(!root) return 0;
            if(!root->left && !root->right) return 1;
            int maximum = 1;
            stack<pair<TreeNode*, int>> S;
            S.push(make_pair(root, 1));
            while(!S.empty())
            {
                pair<TreeNode*, int> temp = S.top();
                S.pop();
                if(temp.first->left)
                {
                    S.push(make_pair(temp.first->left, temp.second + 1));
                    if(maximum < temp.second +1) maximum = temp.second +1;
                }
                if(temp.first->right)
                {
                    S.push(make_pair(temp.first->right, temp.second + 1));
                    if(maximum < temp.second +1) maximum = temp.second +1;
                }
            }
            cout << "Maximum: " << maximum << endl;
            return maximum;
        }
    };