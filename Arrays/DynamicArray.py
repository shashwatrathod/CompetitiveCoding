#https://www.hackerrank.com/challenges/dynamic-array/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen


def dynamicArray(n, queries):
    lastAnswer = 0
    ans = []
    seq = []
    for _ in range(n):
        temp = []
        seq.append(temp)
    
    for query in queries:
        query_type = query[0]
        x = query[1]
        num = query[2]
        if(query_type==1):
            seq_index = ((x^lastAnswer)%n)
            seq[seq_index].append(num)
        elif(query_type==2):
            seq_index = ((x^lastAnswer)%n)
            element_index = num%len(seq[seq_index])
            lastAnswer = seq[seq_index][element_index]
            ans.append(lastAnswer)
    return ans