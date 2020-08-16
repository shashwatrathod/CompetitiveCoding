//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?h_r=next-challenge&h_v=zen

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* new_node = malloc(sizeof(DoublyLinkedListNode*));
    new_node->data = data;
    if(head==NULL){
        head = new_node;
        return head;
    }
    DoublyLinkedListNode* temp = head;
    while(temp!=NULL){
        DoublyLinkedListNode* next = temp->next;
        if(next!=NULL){
            if(temp==head && new_node->data<=temp->data){
                new_node->next = temp;
                temp->prev = new_node;
                head = new_node;
                return head;
            }
            if(new_node->data>=temp->data && new_node->data<=next->data){
                new_node->next = temp->next;
                new_node->prev = next->prev;
                temp->next = new_node;
                next->prev = new_node;
                return head;
            }
        }else{
            temp->next = new_node;
            new_node->prev = temp;
            new_node->next=NULL;
            return head;
        }
        temp = temp->next;
    }
    return head;
}