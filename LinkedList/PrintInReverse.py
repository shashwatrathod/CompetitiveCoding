#https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?h_r=next-challenge&h_v=zen

def reversePrint(head):
    temp = head
    stack = []
    while(temp!=None):
        stack.append(temp.data)
        temp = temp.next
    for i in reversed(range(len(stack))):
        print(stack[i])