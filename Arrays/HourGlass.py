#https://www.hackerrank.com/challenges/2d-array/problem?h_r=next-challenge&h_v=zen

def hourglassSum(arr):
    sums = []
    n_rows = len(arr)
    n_cols = len(arr[0])

    for i in range(n_rows-2):
        for j in range(n_cols-2):
            sums.append(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+
            arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2])
        
    return max(sums)