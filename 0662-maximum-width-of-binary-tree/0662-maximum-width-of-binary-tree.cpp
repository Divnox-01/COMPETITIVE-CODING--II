/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
     queue <pair <TreeNode * , unsigned long long  >> q ;
     int maxwidth = 0;
     q.push({root ,0});
     while (q.size ()>0)
     {
        int currsize = q.size();
        unsigned long long  startidx = q.front().second;
         unsigned long long  endidx = q.back().second ;
          maxwidth = max(maxwidth , ( int )(endidx - startidx +1));
          for (int i =  0 ; i< currsize ;i++)
          {
            auto current = q.front ();
            unsigned long long idx = current.second;

            q.pop();
               TreeNode* node = current.first;
              
            if(node  ->left )
            {
                q.push({node->left , idx * 2 +1});
            }
            if ( node ->right)
            {
                q.push({node ->right ,idx *2 +2});
            }
          }
     }
          return maxwidth ;

     
    }
};