//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int* stack = (int*)malloc(sizeof(int)*1);
    int top = 0;
    SinglyLinkedListNode* temp = head;
    if(head==NULL){
        return NULL;
    }

    while (temp!=NULL) {
        if(top>0){
            stack = realloc(stack,sizeof(int)*(top+1));
        }
        stack[top++] = temp->data;
        temp=temp->next;
    }

    return stack[top-1-positionFromTail];
}