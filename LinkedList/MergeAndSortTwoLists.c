//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1 = head1;
    SinglyLinkedListNode* temp2 = head2;
    SinglyLinkedListNode* temp3 = malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* new_head = malloc(sizeof(SinglyLinkedListNode));
    int firstElement = 0;
    if(head1==NULL){
        return head2;
    }else if(head2==NULL){
        return head1;
    }

    while(1){
        if(firstElement==0){
            if(temp1->data<=temp2->data){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp1->data;
                new_node->next = NULL;
                temp3 = new_node;
                new_head = temp3;
                temp1 = temp1->next;
                firstElement=1;
            }else if(temp2->data < temp1->data){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp2->data;
                new_node->next = NULL;
                temp3 = new_node;
                new_head = temp3;
                temp2 = temp2->next;
                firstElement=1;
            }
        }else{
            if(temp1==NULL && temp2==NULL){
                break;
            }else if(temp1==NULL){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp2->data;
                new_node->next = NULL;
                temp3->next = new_node;
                temp3 = temp3->next;
                temp2 = temp2->next;
            }else if(temp2==NULL){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp1->data;
                new_node->next = NULL;
                temp3->next = new_node;
                temp3 = temp3->next;
                temp1 = temp1->next;
            }else if(temp1->data <= temp2->data){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp1->data;
                new_node->next = NULL;
                temp3->next = new_node;
                temp3 = temp3->next;
                temp1 = temp1->next;
            }else if(temp2->data < temp1->data){
                SinglyLinkedListNode* new_node = malloc(sizeof(SinglyLinkedListNode));
                new_node->data = temp2->data;
                new_node->next = NULL;
                temp3->next = new_node;
                temp3 = temp3->next;
                temp2 = temp2->next;
            }
        }
    }

    return new_head;