//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

int getHeight(struct node* root) {
    if(root==NULL){
        return -1;
    }

    int leftDepth = getHeight(root->left);
    int rightDepth = getHeight(root->right);

    if(leftDepth>rightDepth){
        return leftDepth+1;
    }else{
        return rightDepth+1;
    }
}