//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/forum

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* new_head = malloc(sizeof(DoublyLinkedListNode));
    DoublyLinkedListNode* t = malloc(sizeof(DoublyLinkedListNode));
    t->next = NULL;
    t->prev = NULL;
    if(head==NULL){
        return head;
    }

    DoublyLinkedListNode* temp = head;
    while (temp->next!=NULL) {
        temp = temp->next;
    }
    new_head = temp;
    do{
        t->next = temp->prev;
        t->prev = temp->next;
        temp->next = t->next;
        temp->prev = t->prev;
        temp = temp->next;
    }while(temp!=NULL);
    
    return new_head; 
}