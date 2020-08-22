//https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?h_r=next-challenge&h_v=zen    
   
Node * insert(Node * root, int data) {
    Node* newNode = new Node(data);
    if(root==NULL){
        root = newNode;
        return root;
    }

    Node* temp = root;
    while(true){
        if(newNode->data < temp->data){
            if(temp->left != NULL){
                temp=temp->left;
            }else{
                temp->left = newNode;
                break;
            }
        }else if(newNode->data > temp->data){
            if(temp->right!=NULL){
                temp=temp->right;
            }else{
                temp->right = newNode;
                break;
            }
        }else if(newNode->data == temp->data){
            break;
        }
    }

    return root;
}