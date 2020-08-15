#https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

def has_cycle(head):
    d = {}
    if(head==None):
        return False

    temp = head
    while(temp!=None):
        if(d.get(temp)==None):
            d[temp] = 1
            temp = temp.next
        else:
            return True
    return False