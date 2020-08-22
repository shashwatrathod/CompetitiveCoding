#https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

def levelOrder(root):
    queue = []
    if root == None:
        return root
    temp = root
    queue.append(temp)
    ans = []
    while len(queue)>0:
        temp = queue[0]
        ans.append(temp.info)
        queue.pop(0)

        if(temp.left is not None):
            queue.append(temp.left)
        
        if(temp.right is not None):
            queue.append(temp.right)
        
    print(" ".join([str(x) for x in ans]))