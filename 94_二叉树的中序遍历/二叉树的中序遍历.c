/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void medium_order_traversal();
#define size_number 100
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//returnSize 是返回的数组的大小。是一个int类型的指针，指向一个int的地址。
//*returnSize，获取指向的地址的值。
int* inorderTraversal(struct TreeNode* root, int* returnSize){
  *returnSize=0;
  int* return_array=(int *)malloc(sizeof(int)*size_number);
  medium_order_traversal(root,returnSize,return_array);
  return return_array;
}

void medium_order_traversal(struct TreeNode* root,int* returnSize,int* return_array){
  if(root){
    medium_order_traversal(root->left,returnSize,return_array);
    return_array[*returnSize]=root->val;
    (*returnSize)++;
    medium_order_traversal(root->right,returnSize,return_array);
  }
}















