//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* curr = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* next = malloc(sizeof(SinglyLinkedListNode));
    prev = NULL;
    next = NULL;
    curr = head;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}