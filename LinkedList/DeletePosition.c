//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp_node = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* del_node = malloc(sizeof(SinglyLinkedListNode));
    if(position==0){
        head = head->next;
        return head;
    }
    temp_node = head;
    for(int i=0;i<position-1;i++){
        temp_node = temp_node->next;
    }

    del_node = temp_node->next;
    temp_node->next = del_node->next;
    del_node->next = NULL;
    return head;

}