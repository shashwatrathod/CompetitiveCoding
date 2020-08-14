//https://www.hackerrank.com/challenges/compare-two-linked-lists/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1 = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* temp2 = malloc(sizeof(SinglyLinkedListNode));

    if(head1==NULL && head2==NULL){
        return 1;
    }else if(head1==NULL || head2==NULL){
        return 0;
    }

    temp1 = head1;
    temp2 = head2;
    while(1){
        if(temp1==NULL && temp2==NULL){
            return 1;
        }else if(temp1==NULL || temp2==NULL){
            return 0;
        }else{
            if(temp1->data==temp2->data){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }else{
                return 0;
            }
        }
    }
}