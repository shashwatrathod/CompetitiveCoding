//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp_node = malloc(sizeof(SinglyLinkedListNode));
    temp_node = head;
    if(temp_node==NULL){
        printf("Empty!");
        return;
    }

    while(temp_node!=NULL){
        printf("%d\n",temp_node->data);
        temp_node = temp_node->next;
    }

}