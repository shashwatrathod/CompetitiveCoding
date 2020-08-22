//https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?h_r=next-challenge&h_v=zen

void postOrder( struct node *root) {
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}