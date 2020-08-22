//https://www.hackerrank.com/challenges/tree-inorder-traversal/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

void inOrder( struct node *root) {
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}