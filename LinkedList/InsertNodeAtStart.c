//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
    new_node->data = data;
    new_node->next = llist;
    return new_node;
}
