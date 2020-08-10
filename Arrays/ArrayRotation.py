#https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0
#right rotate
n = int(input())
ans = ""
for _ in range(n):
    inp_1 = str(input()).split(" ")
    size = int(inp_1[0])
    rotate_by = int(inp_1[1])
    
    input_arr = str(input()).strip().split(" ")
    input_arr = list(map(int, input_arr))

    temp_arr = [i for i in range(size)]
    k = rotate_by
    for i in range(size):
        temp_arr[i] = input_arr[k]
        k = (k+1)%(size)
        ans += str(temp_arr[i]) + " "
    ans+="\n"

print(ans)