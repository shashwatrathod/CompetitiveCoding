#https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem

def findMergeNode(head1, head2):
    temp1 = head1
    temp2 = head2
    d = {}
    while(temp1!=None):
        if(temp1!=None):
            if(d.get(temp1)==None):
                d[temp1]=temp1.data
                temp1 = temp1.next

    while(temp2!=None):
        if(temp2!=None):
            if(d.get(temp2)==None):
                d[temp2]=temp2.data
                temp2 = temp2.next
            else:
                return temp2.data
        