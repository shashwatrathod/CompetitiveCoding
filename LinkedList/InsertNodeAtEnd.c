//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?h_r=next-challenge&h_v=zen

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* temp_node = malloc(sizeof(SinglyLinkedListNode));

    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL){
        head = new_node;
        return head;
    }

    temp_node = head;
    while (temp_node->next!=NULL) {
        temp_node = temp_node->next;
    }
    temp_node->next = new_node;
    return head;
}