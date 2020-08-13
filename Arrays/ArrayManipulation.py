#https://www.hackerrank.com/challenges/crush/problem

#Credits: @amitkumarjnv2

def arrayManipulation(n, queries):
    curr_max = 0
    arr = [0 for _ in range(n)]
    for a,b,k in queries:
        arr[a-1] += k
        if(b <= n-1):
            arr[b] -= k
    s = 0
    for element in arr:
        s += element
        curr_max = max(curr_max,s)

    return curr_max