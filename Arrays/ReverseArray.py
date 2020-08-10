#https://www.hackerrank.com/challenges/arrays-ds/problem

def reverseArray(a):
    rev = []
    a_len = len(a)
    i = a_len-1
    while(True):
        rev.append(a[i])
        i -= 1
        if(i<0):
            break
    return rev