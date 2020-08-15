//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?h_r=next-challenge&h_v=zen

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    if(head==NULL || head->next==NULL){
        return head;
    }
    SinglyLinkedListNode* curr = head->next;
    SinglyLinkedListNode* prev = head;

    while (curr!=NULL) {
        if(curr->data==prev->data){
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        }else{
            curr = curr->next;
            prev=prev->next;
        }
    }

    return head;

}