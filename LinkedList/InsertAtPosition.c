//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* prev_node = malloc(sizeof(SinglyLinkedListNode));
    new_node->data = data;
    new_node->next = NULL;

    if(position==0 || head==NULL){
        head = new_node;
        return head;
    }
    prev_node = head;
    for(int i=0;i<position-1;i++){
        prev_node = prev_node->next;
    }

    new_node->next = prev_node->next;
    prev_node->next = new_node;
    return head;

}