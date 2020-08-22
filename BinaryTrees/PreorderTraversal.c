//https://www.hackerrank.com/challenges/tree-preorder-traversal/problem

void preOrder( struct node *root) {
    if(root==NULL){
        return;
    }

    struct node* n = root;

    printf("%d ",n->data);
    preOrder(n->left);
    preOrder(n->right);
}